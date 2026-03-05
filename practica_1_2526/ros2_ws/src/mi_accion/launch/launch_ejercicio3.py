from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    # Declaramos el Launch Argument 
    numero_argumento = DeclareLaunchArgument(
        'numero_argumento',
        default_value='7',
        description='Número entero para el campo numero'
    )

    # Definimos el nodo publicador con el argumento
    nodo_publicador = Node(
        package='p2pkg',
        executable='server',
        name='pub_ej3',
        parameters=[{
            'numero': LaunchConfiguration('numero_argumento')
        }]
    )

    # Definimos el nodo suscriptor
    nodo_suscriptor = Node(
        package='p2pkg',
        executable='client',
        name='sub_ej3'
    )

    # Devolvemos la configuración completa del launcher
    return LaunchDescription([
        numero_argumento,
        nodo_publicador,
        nodo_suscriptor
    ])  