#!/usr/bin/env python3
from __future__ import print_function
import odrive
from odrive.enums import *
import time
import math

from interfaces.srv import Odrive # CHANGE

import rclpy
from rclpy.node import Node

from std_msgs.msg import String

# Find a connected ODrive (this will block until you connect one)
print("finding an odrive...")
odrv0 = odrive.find_any()
print("odrive found with serial %d" % odrv0.serial_number)

class MinimalService(Node):

    def __init__(self):
        super().__init__('odrive_service')
        self.srv = self.create_service(Odrive,'odrive', self.odrive_callback)        # CHANGE

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

    def odrive_callback(self, request, response):

        self.get_logger().info('Incoming request axis: %d, idle: %r calibration: %r control_mode: %d pos: %f vel: %f torque: %f\n' % (request.axis, request.idle, request.calibration, request.control_mode, request.pos, request.vel, request.torque)) # CHANGE

        if(request.axis == 1):
            if request.idle == 1:
                odrv0.axis1.requested_state = AXIS_STATE_IDLE
            elif request.calibration == 1:

                odrv0.axis1.requested_state = AXIS_STATE_FULL_CALIBRATION_SEQUENCE
            else:
                if request.giro == 1:
                    H = 47.017
                    beta = 1.523
                    V = (H*(request.ang - beta)/0.259) if (request.ang >= 0) else (H*(beta + request.ang)/0.259)
                    odrv0.axis1.controller.config.control_mode = CONTROL_MODE_VELOCITY_CONTROL
                    odrv0.axis0.controller.config.control_mode = CONTROL_MODE_VELOCITY_CONTROL
                    odrv0.axis1.requested_state = AXIS_STATE_CLOSED_LOOP_CONTROL
                    odrv0.axis0.requested_state = AXIS_STATE_CLOSED_LOOP_CONTROL
                    next_t = odrv0.axis1.encoder.shadow_count + V*4800
                    odrv0.axis1.controller.input_vel = 0.5
                    odrv0.axis0.controller.input_vel = 0
                    while odrv0.axis1.encoder.shadow_count < next_t:
                        time.sleep(0.1)
                    odrv0.axis1.controller.input_vel = 0
                    odrv0.axis1.requested_state = AXIS_STATE_IDLE
                    odrv0.axis0.requested_state = AXIS_STATE_IDLE
                else:

                    if request.control_mode == 1:
                        odrv0.axis1.controller.config.control_mode = CONTROL_MODE_TORQUE_CONTROL
                        odrv0.axis1.requested_state = AXIS_STATE_CLOSED_LOOP_CONTROL
                        odrv0.axis1.controller.input_torque = request.torque

                    elif request.control_mode  == 2:

                        odrv0.axis1.controller.config.control_mode = CONTROL_MODE_VELOCITY_CONTROL
                        odrv0.axis1.requested_state = AXIS_STATE_CLOSED_LOOP_CONTROL
                        odrv0.axis1.controller.input_vel = request.vel

                    elif request.control_mode == 3:

                        odrv0.axis1.controller.config.control_mode = CONTROL_MODE_POSITION_CONTROL
                        odrv0.axis1.requested_state = AXIS_STATE_CLOSED_LOOP_CONTROL
                        odrv0.axis1.controller.input_pos = request.pos
                    else:
                        self.get_logger().info('ERROR: control_mode invalido')
        elif(request.axis == 0):

            if request.idle == 1:
                odrv0.axis0.requested_state = AXIS_STATE_IDLE
            elif request.calibration == 1:

                odrv0.axis0.requested_state = AXIS_STATE_FULL_CALIBRATION_SEQUENCE
            else: 
                if request.giro == 1:
                    H = 0.0486
                    beta = 1.523
                    V = (H*(request.ang - beta)/0.259) if (request.ang >= 0) else (H*(beta + request.ang)/0.259)
                    odrv0.axis1.controller.config.control_mode = CONTROL_MODE_VELOCITY_CONTROL
                    odrv0.axis0.controller.config.control_mode = CONTROL_MODE_VELOCITY_CONTROL
                    odrv0.axis1.requested_state = AXIS_STATE_CLOSED_LOOP_CONTROL
                    odrv0.axis0.requested_state = AXIS_STATE_CLOSED_LOOP_CONTROL
                    next_t = odrv0.axis0.encoder.shadow_count + V*4800
                    print("Cuenta = ", V)
                    odrv0.axis0.controller.input_vel = 0.5
                    odrv0.axis1.controller.input_vel = 0
                    print("Inicio espera")
                    while odrv0.axis0.encoder.shadow_count < next_t:
                        time.sleep(0.1)
                    print("Final espera")
                    odrv0.axis0.controller.input_vel = 0
                    odrv0.axis1.requested_state = AXIS_STATE_IDLE
                    odrv0.axis0.requested_state = AXIS_STATE_IDLE
                else:
                
                    if request.control_mode == 1:
                        odrv0.axis0.controller.config.control_mode = CONTROL_MODE_TORQUE_CONTROL
                        odrv0.axis0.requested_state = AXIS_STATE_CLOSED_LOOP_CONTROL
                        odrv0.axis0.controller.input_torque = request.torque

                    elif request.control_mode  == 2:

                        odrv0.axis0.controller.config.control_mode = CONTROL_MODE_VELOCITY_CONTROL
                        odrv0.axis0.requested_state = AXIS_STATE_CLOSED_LOOP_CONTROL
                        odrv0.axis0.controller.input_vel = request.vel

                    elif request.control_mode == 3:

                        odrv0.axis0.controller.config.control_mode = CONTROL_MODE_POSITION_CONTROL
                        odrv0.axis0.requested_state = AXIS_STATE_CLOSED_LOOP_CONTROL
                        odrv0.axis0.controller.input_pos = request.pos
                    else:
                        self.get_logger().info('ERROR: control_mode invalido')
        else:
           self.get_logger().info('ERROR: eje invalido (axis solo puede valer 1 o 0)')


        self.get_logger().info('Parameters set: \nAXIS0: current_state: %d, requested_state: %d, control_mode: %d, pos: %f, vel: %f, torque: %f \nAXIS1: current_state: %d, requested_state: %d, control_mode: %d, pos: %f, vel: %f, torque: %f\n' % (odrv0.axis0.current_state,odrv0.axis0.requested_state,odrv0.axis0.controller.config.control_mode, odrv0.axis0.controller.input_pos,  odrv0.axis0.controller.input_vel,  odrv0.axis0.controller.input_torque, odrv0.axis1.current_state,odrv0.axis1.requested_state,odrv0.axis1.controller.config.control_mode, odrv0.axis1.controller.input_pos,  odrv0.axis1.controller.input_vel,  odrv0.axis1.controller.input_torque))



        response.ack = "Cambios realizados con " + str(odrv0.error) + " error(es)\n"
        return response

def main(args=None):
    rclpy.init(args=args)

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()

if __name__ == '__main__':
    main()
