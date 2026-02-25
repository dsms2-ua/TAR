import rclpy
from rclpy.node import Node

from interfaz.msg import P2pkgMensaje


class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('nodosub_ejercicio2')
        self.subscription = self.create_subscription(
            P2pkgMensaje,                                              
            'topic_ejercicio2',
            self.listener_callback,
            10)
        self.subscription

    def listener_callback(self, msg):
        self.get_logger().info(f"Recibido mensaje: numero={msg.numero} x={msg.posicion.orientation.x}, w={msg.posicion.orientation.w}, fecha={msg.fecha}")  


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()