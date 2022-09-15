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
from copy import copy

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from control_interfaces.msg import PositionCommand


class SimpleRobotDriverNode(Node):
    def __init__(self):
        super().__init__('simple_robot_driver')

        # 用于发布机器人当前关节状态消息，其消息类型为JointState，话题名称为joint_states
        self._pub = self.create_publisher(JointState, 'joint_states', 10)

        # 用于从名称为command的话题上订阅PositionCommand类型消息，
        # 且每当收到该消息时就会调用回调函数_command_callback()以对接收到的消息进行处理
        self._sub = self.create_subscription(
            PositionCommand, 'command', self._command_callback, 10)
        
        # 创建了一个计时器对象变量_timer，该计时器以100hz的频率对回调函数_timer_callback()进行调用
        self._timer = self.create_timer(0.01, self._timer_callback)

        # 对机械臂6个关节的位置列表变量_position和速度指令列表变量_velocity进行了初始化
        self._position = [0.0, -1.5708, 1.5708, 0.0, 1.5708, 0.0]
        self._velocity = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0]

    def _timer_callback(self):

        # 在_timer_callback()回调函数中，
        # 创建了JointState类型消息对象变量msg，
        # 将时钟当前时间转换成消息后填充了该消息头的时间戳字段msg.header.stamp，
        # 而msg.name则用6个关节的名称填充，
        # 并通过复制self._position和self._velocity变量的值
        # 来分别填充msg.position和msg.velocity字段，
        # 最后在填充完上述字段后调用_pub.publish()方法来发布该消息。
        msg = JointState()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['joint_a1', 'joint_a2', 'joint_a3',
                    'joint_a4', 'joint_a5', 'joint_a6']
        msg.position = copy(self._position)
        msg.velocity = copy(self._velocity)
        self._pub.publish(msg)

    def _command_callback(self, msg):
        # 而在_command_callback()回调函数中，
        # 就是简单地将从话题command上接收到的PositionCommand类型消息的command字段值
        # 复制并赋给self._position变量。

        self._position = copy(msg.command)


def main(args=None):
    rclpy.init(args=args)

    simple_robot_driver_node = SimpleRobotDriverNode()
    rclpy.spin(simple_robot_driver_node)

    simple_robot_driver_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
