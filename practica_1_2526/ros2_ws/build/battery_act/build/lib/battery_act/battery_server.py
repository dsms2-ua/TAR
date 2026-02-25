import time
import rclpy
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.node import Node
from interfaz.action import Battery

class BatteryCharger(Node):
    def __init__(self):
        super().__init__('battery_charger')
        self._action_server = ActionServer(
            self,
            Battery,
            'battery_status',
            execute_callback=self.execute_callback,
            goal_callback=self.goal_callback,
            cancel_callback=self.cancel_callback)
        self.get_logger().info('Servidor de batería iniciado...')

    def goal_callback(self, goal_request):
        self.get_logger().info(f'Recibido objetivo de aviso: {goal_request.target_percentage}%')
        return GoalResponse.ACCEPT

    def cancel_callback(self, goal_handle):
        self.get_logger().info('Recibida petición de cancelación')
        return CancelResponse.ACCEPT

    async def execute_callback(self, goal_handle):
        self.get_logger().info('Iniciando descarga de batería...')
        feedback_msg = Battery.Feedback()
        current_battery = 100
        target = goal_handle.request.target_percentage

        while current_battery > target:
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                self.get_logger().info('Acción cancelada')
                return Battery.Result(warning="Carga interrumpida por el usuario")

            feedback_msg.current_percentage = current_battery
            self.get_logger().info(f'Batería actual: {current_battery}%')
            goal_handle.publish_feedback(feedback_msg)
            
            current_battery -= 5
            time.sleep(1.0) # 5% cada segundo

        goal_handle.succeed()
        result = Battery.Result()
        result.warning = "¡Batería Baja, por favor cargue el robot!"
        return result

def main(args=None):
    rclpy.init(args=args)
    node = BatteryCharger()
    rclpy.spin(node)

if __name__ == '__main__':
    main()