from interfaces.srv import Odrive      # CHANGE
import sys
import rclpy
from rclpy.node import Node


class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('odrive_client_async')
        self.cli = self.create_client(Odrive, 'odrive')       # CHANGE
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Odrive.Request()                                   # CHANGE

    def send_request(self):
        self.req.axis = int(sys.argv[1])
        self.req.idle = sys.argv[2].lower() == 'true'
        self.req.calibration = sys.argv[3].lower() == 'true'
        self.req.giro = sys.argv[4].lower() == 'true'
        self.req.ang = float(sys.argv[5])                  # change
        self.req.control_mode = int(sys.argv[6])                  # change 
        self.req.pos = float(sys.argv[7])                  # change
        self.req.vel = float(sys.argv[8])                  # change
        self.req.torque = float(sys.argv[9])                  # change
        self.future = self.cli.call_async(self.req)

        self.get_logger().info('Enviando: %d, %r, %r, %r, %f, %d, %f, %f, %f\n' % (self.req.axis, self.req.idle, self.req.calibration, self.req.giro, self.req.ang, self.req.control_mode, self.req.pos, self.req.vel,self.req.torque ))


def main(args=None):
    rclpy.init(args=args)

    minimal_client = MinimalClientAsync()
    minimal_client.send_request()

    while rclpy.ok():
        rclpy.spin_once(minimal_client)
        if minimal_client.future.done():
            try:
                response = minimal_client.future.result()
            except Exception as e:
                minimal_client.get_logger().info(
                    'Service call failed %r' % (e,))
            else:
                minimal_client.get_logger().info(
                    'Response: %s' % response.ack)
            break

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
