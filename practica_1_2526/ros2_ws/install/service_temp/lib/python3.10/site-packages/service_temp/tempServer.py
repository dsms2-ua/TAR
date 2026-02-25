import rclpy
from rclpy.node import Node
from interfaz.srv import ConvertTemp

class TempServer(Node):
    def __init__(self):
        super().__init__('temp_server')
        self.srv = self.create_service(ConvertTemp, 'convert_temp', self.convert_callback)
        self.get_logger().info('Servidor de conversión de temperatura')

    def convert_callback(self, request, response):
        if request.conversion_type == 'Cel_to_Far':
            response.converted_temp = (request.input_temp * 9/5) + 32
            tipo = "Celsius a Fahrenheit"
        elif request.conversion_type == 'Far_to_Cel':
            response.converted_temp = (request.input_temp - 32) * 5/9
            tipo = "Fahrenheit a Celsius"
        else:
            self.get_logger().error('Tipo de conversión no válido')
            return response

        self.get_logger().info(f'Petición: {request.input_temp} ({tipo}) -> Resultado: {response.converted_temp}')
        return response

def main():
    rclpy.init()
    node = TempServer()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()