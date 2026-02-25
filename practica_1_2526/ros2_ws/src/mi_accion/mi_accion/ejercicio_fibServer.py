import time
import math
import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

# Importamos la nueva acción
from interfaz.action import EjFibonacci 

class EjercicioFibServer(Node):
    def __init__(self):
        super().__init__('ejercicio_fibServer')
        self._action_server = ActionServer(
            self,
            EjFibonacci,
            'ejercicio_fibServer',
            self.execute_callback)
        self.get_logger().info('Servidor EjFibonacci iniciado...')

    def execute_callback(self, goal_handle):
        self.get_logger().info('Ejecutando secuencia...')

        feedback_msg = EjFibonacci.Feedback()
        secuencia = [0, 1]

        # Procesamos tantas veces como pida el cliente
        for i in range(1, goal_handle.request.orden):
            nuevo_num = secuencia[i] + secuencia[i-1]
            secuencia.append(nuevo_num)
            
            # Calculamos la media y la raíz cuadrada
            media = sum(secuencia) / len(secuencia)
            feedback_msg.raiz = math.sqrt(media)
            
            self.get_logger().info(f'Feedback (Raíz Media): {feedback_msg.raiz:.4f}')
            goal_handle.publish_feedback(feedback_msg)
            
            time.sleep(1)

        goal_handle.succeed()

        result = EjFibonacci.Result()
        result.secuencia_final = secuencia
        return result

def main(args=None):
    rclpy.init(args=args)
    node = EjercicioFibServer()
    rclpy.spin(node)

if __name__ == '__main__':
    main()