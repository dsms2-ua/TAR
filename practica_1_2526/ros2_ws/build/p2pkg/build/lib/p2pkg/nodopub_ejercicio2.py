import rclpy
from rclpy.node import Node
from random import random
from datetime import datetime

from interfaz.msg import P2pkgMensaje
from geometry_msgs.msg import Pose

class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('nodopub_ejercicio2')
        
        self.declare_parameter('numero', 5)
        
        self.publisher_ = self.create_publisher(P2pkgMensaje, 'topic_ejercicio2', 10)
        
        timer_period = 1.0
        self.timer = self.create_timer(timer_period, self.timer_callback)
        
        self.posicion = Pose()
        

    def timer_callback(self):
        msg = P2pkgMensaje()
                                                        
        msg.numero = self.get_parameter('numero').get_parameter_value().integer_value
        
        msg.fecha = datetime.now().strftime('%d/%m/%Y')
        
        msg.posicion.position.x = random()
        msg.posicion.orientation.w = random()
                               
        self.publisher_.publish(msg)
        self.get_logger().info(f"Enviando mensaje: numero={msg.numero} x={msg.posicion.position.x:.4f}, w={msg.posicion.orientation.w:.4f}, fecha={msg.fecha}")       


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()