import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from std_msgs.msg import String

from interfaz.action import EjFibonacci

class EjerciciosFibClient(Node):
    def __init__(self):
        super().__init__('ejercicio_fibClient')
        
        self.declare_parameter('numero', 7)
        
        self._action_client = ActionClient(self, EjFibonacci, 'ejercicio_fibServer')
        
        self.status_publisher = self.create_publisher(String, '/estado_accion', 10)
        
        self.is_processing = False
        self.timer = self.create_timer(0.5, self.timer_callback)

    def timer_callback(self):
        # Lo usamos para publicar si está en True
        if self.is_processing:
            msg = String()
            msg.data = 'en proceso'
            self.status_publisher.publish(msg)

    def send_goal(self):
        # Leer el valor del parámetro
        orden_val = self.get_parameter('numero').get_parameter_value().integer_value
        
        goal_msg = EjFibonacci.Goal()
        goal_msg.orden = orden_val

        self.get_logger().info(f'Esperando al servidor... Objetivo: {orden_val}')
        self._action_client.wait_for_server()

        self.is_processing = True
        self._send_goal_future = self._action_client.send_goal_async(
            goal_msg, 
            feedback_callback=self.feedback_callback
        )
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rechazado por el servidor')
            self.is_processing = False
            return

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def feedback_callback(self, feedback_msg):
        # Recibe el float64 (raíz de la media)
        raiz_media = feedback_msg.feedback.raiz
        self.get_logger().info(f'Feedback recibido (Raíz Media): {raiz_media:.4f}')

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info(f'Acción finalizada. Resultado: {result.secuencia_final}')
        # Si finaliza la acción, paramos de publicar
        self.is_processing = False

def main(args=None):
    rclpy.init(args=args)
    client = EjerciciosFibClient()
    client.send_goal()
    rclpy.spin(client)
    rclpy.shutdown()