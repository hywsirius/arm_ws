

from re import S
import numpy as np
import time
from copy import copy
from pynput import keyboard 

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from control_interfaces.msg import PositionCommand
# simple_robot_keyboard_controller_node

class SimpleRobotKeyboardControllerNode(Node):
    def __init__(self):
        super().__init__('simple_robot_keyboard_controller')

        # 构造函数中，指定了该节点类的名称为simple_robot_controller；
        # 然后也创建了1个消息发布者对象变量_pub和1个消息订阅者对象变量_sub，
        
        # 用于在名称为command的话题上发布PositionCommand类型消息，
        self._pub = self.create_publisher(PositionCommand, 'command', 10)
        

        # 用于订阅名称为joint_states话题上的JointState类型的消息
        # 且每当接收到该消息就调用回调函数_callback()对接收到的消息进行处理；
        self._sub = self.create_subscription(
            JointState, 'joint_states', 
            self._callback, 
            10)

        self.newrotepos= [0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
        # 最后初始化了起始时刻变量_t0和起始位置变量_initial_position。
        self._t0 = None
        self._initial_position = None
        self.msg=None
     
        self.listener = keyboard.Listener(on_press=self.on_press,on_release=self.on_release)
        self.listener.start()

    def _callback(self, msg):
        if self.msg is None:
            self.msg=msg
        if self._t0 is None and self.msg :
            self._t0 = time.time()
            self._initial_position = copy(self.msg.position)




    def revolte(self,index,correction):
        if self.msg is None or self._t0 is None:
            return

       
        # 接着创建了PositionCommand类型消息的对象变量command_msg，
        command_msg = PositionCommand()

        # 并复制接收到的消息的position字段填充到该消息变量的command字段；
        command_msg.command = copy(self.msg.position)


        temp =self.newrotepos[index]+correction
        if temp>1.75 :
            self.newrotepos[index]=1.75
        elif temp<-1.75:
            self.newrotepos[index]=-1.75
        else:
            self.newrotepos[index]=temp


        print(self.newrotepos)
   
        command_msg.command = list(map(lambda x: x[0]+x[1], zip( self._initial_position ,  self.newrotepos )))
        # 最后是发布该消息。
        self._pub.publish(command_msg)

    #键盘按键按下事件处理，按下方向键时设定线速度和角速度数据并发布
    def on_press(self, key):
        # print("223")
        # print('{0} pressed'.format(key))




        if key == keyboard.Key.up:      #上：向前
            self.revolte(1,0.1)
        elif key == keyboard.Key.down:  #下：向后
            self.revolte(1,-0.1)
        elif key == keyboard.Key.left:  #下：向后
            self.revolte(0,-0.1)
        elif key == keyboard.Key.right:  #下：向后
            self.revolte(0,0.1)

 
     #键盘按键松开事件处理，松开方向键时设定线速度和角速度为0并发布
    def on_release(self, key):
        # print("323")
        # print('{0} released'.format(key))
         #判断是否是方向键，只处理方向键事件
        if key == keyboard.Key.up or key == keyboard.Key.down or key == keyboard.Key.left or key == keyboard.Key.right:
            pass


def main(args=None):
    rclpy.init(args=args)

    simple_robot_keyboard_controller_node = SimpleRobotKeyboardControllerNode()
    rclpy.spin(simple_robot_keyboard_controller_node)
    
    simple_robot_keyboard_controller_node.destroy_node()
    rclpy.shutdown()
    

if __name__ == '__main__':
    main()