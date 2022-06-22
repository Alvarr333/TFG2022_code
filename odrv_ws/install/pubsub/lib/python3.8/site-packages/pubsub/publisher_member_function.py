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

print("finding an odrive...")
odrv0 = odrive.find_any()
print("odrive found with serial %d" % odrv0.serial_number)


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('OD_velocidad')
        self.publisher_ = self.create_publisher(Motor, 'datos_motor', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
                # Calibrate motor and wait for it to finish
        print("starting calibration on axis 0...")
        odrv0.axis0.requested_state = AXIS_STATE_FULL_CALIBRATION_SEQUENCE

        while odrv0.axis0.current_state != AXIS_STATE_IDLE:
            time.sleep(0.1)


        print("finished calibration on axis 0 with "+ str(odrv0.axis0.error) + " error(s)")

        print("starting calibration on axis 1...")
        odrv0.axis1.requested_state = AXIS_STATE_FULL_CALIBRATION_SEQUENCE

        while odrv0.axis1.current_state != AXIS_STATE_IDLE:
            time.sleep(0.1)

        print("finished calibration on axis 1 with "+ str(odrv0.axis1.error) + " error(s)")
        odrv0.axis1.controller.config.control_mode = CONTROL_MODE_VELOCITY_CONTROL
        odrv0.axis0.controller.config.control_mode = CONTROL_MODE_VELOCITY_CONTROL
        odrv0.axis1.requested_state = AXIS_STATE_CLOSED_LOOP_CONTROL
        odrv0.axis0.requested_state = AXIS_STATE_CLOSED_LOOP_CONTROL
        odrv0.axis1.controller.input_vel = -0.5
        odrv0.axis0.controller.input_vel = 0.5
        self.i = 0


    def timer_callback(self):
        msg = Motor()
        msg.torque_d = odrv0.axis1.motor.current_control.Iq_measured*odrv0.axis0.motor.config.torque_constant
        msg.torque_i = odrv0.axis0.motor.current_control.Iq_measured*odrv0.axis1.motor.config.torque_constant
        msg.velocidad_d = odrv0.axis1.encoder.vel_estimate
        msg.velocidad_i = odrv0.axis0.encoder.vel_estimate
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing...')
        if self.i >= 40:
            odrv0.axis1.controller.input_vel = 0
            odrv0.axis0.controller.input_vel = 0
            odrv0.axis1.requested_state = AXIS_STATE_IDLE
            odrv0.axis0.requested_state = AXIS_STATE_IDLE
            self.i = 0
        else:    
            self.i += 1


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
