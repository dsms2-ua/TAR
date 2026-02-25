import rclpy
from rclpy.node import Node
from random import random
from datetime import datetime

from interfaz.msg import P2pkgMensaje
from geometry_msgs.msg import Pose

class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('nodopub_ejercicio2')
        self.publisher_ = self.create_publisher(P2pkgMensaje, '/topic_ejercicio2', 10)
        timer_period = 0.5
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.numero = 0
        
        now = datetime.now()
        self.fecha = now.strftime('%d/%m/%Y')
        self.posicion = Pose()
        self.posicion.orientation.x = 0.0
        self.posicion.orientation.w = 1.0
        

    def timer_callback(self):
        msg = P2pkgMensaje()                                                
        msg.numero = self.numero
        msg.posicion.orientation.x = self.posicion.orientation.x
        msg.posicion.orientation.w = self.posicion.orientation.w
        msg.fecha = self.fecha                        
        self.publisher_.publish(msg)
        self.get_logger().info(f"Enviando mensaje: numero={msg.numero} x={msg.posicion.orientation.x}, w={msg.posicion.orientation.w}, fecha={msg.fecha}")       
        
        self.posicion.orientation.x = random()
        self.posicion.orientation.w = random()
        self.numero += 1


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()