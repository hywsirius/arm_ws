# Copyright 2019 Norwegian University of Science and Technology
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import numpy as np
import time
from copy import copy

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from control_interfaces.msg import PositionCommand


class SimpleControllerNode(Node):
    def __init__(self):
        super().__init__('simple_robot_controller')

        # 构造函数中，指定了该节点类的名称为simple_robot_controller；
        # 然后也创建了1个消息发布者对象变量_pub和1个消息订阅者对象变量_sub，
        
        # 用于在名称为command的话题上发布PositionCommand类型消息，
        self._pub = self.create_publisher(PositionCommand, 'command', 10)
        

        # 用于订阅名称为joint_states话题上的JointState类型的消息
        # 且每当接收到该消息就调用回调函数_callback()对接收到的消息进行处理；
        self._sub = self.create_subscription(
            JointState, 'joint_states', self._callback, 10)

        
        # 最后初始化了起始时刻变量_t0和起始位置变量_initial_position。
        self._t0 = None
        self._initial_position = None

    def _callback(self, msg):

        # 在回调函数_callback()中，先用变量_t0存储接收到第一条消息的时间戳，
        # 用变量_initial_position存储机器人的初始位置；

        if self._t0 is None:
            self._t0 = time.time()
            self._initial_position = copy(msg.position)


        # 接着创建了PositionCommand类型消息的对象变量command_msg，

 
        command_msg = PositionCommand()
        # 并复制接收到的消息的position字段填充到该消息变量的command字段；

        command_msg.command = copy(msg.position)

        # 然后以正弦波的形式计算对这个初始位置的修正值correction；
        correction = 0.1 * (np.sin(3.0 * (time.time() - self._t0)))
        command_msg.command[0] = self._initial_position[0] + correction
        
        # 最后是发布该消息。
        self._pub.publish(command_msg)



# 这里需要说明的是，
# 对初始位置的修正值correction的计算公式中有2个系数可以用来调节机器人（
# 这里为kuka机械臂）的转动幅度和速度，
# 其中第1个系数（代码中的0.1）对应转动幅度，
# 例如如果将0.1替换成1.5708（即π/2），
# 则转动幅度就是左右两边最大转动角度均为90°，
# 若替换成0.7854（即π/4），则左右两边最大转动角度均为45°，
# 依此类推；第2个系数（代码中的3.0）
# 对应转动速度，该系数越大，转动越快，反之该系数越小，则转动越慢。

def main(args=None):
    rclpy.init(args=args)

    simple_controller_node = SimpleControllerNode()
    rclpy.spin(simple_controller_node)
    
    simple_controller_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()