#!/usr/bin/env python3
from __future__ import print_function
import odrive
from odrive.enums import *
import time
import math

from interfaces.msg import Motor
import rclpy
from rclpy.node import Node

from std_msgs.msg import String


class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('Raspberry_Pi')
        self.subscription = self.create_subscription(
            Motor,
            'datos_motor',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.get_logger().info('Datos leidos: VelD = %f; VelI = %f; ParD = %f; ParI = %f\n'  % (msg.velocidad_d, msg.velocidad_i, msg.torque_d, msg.torque_i))


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
