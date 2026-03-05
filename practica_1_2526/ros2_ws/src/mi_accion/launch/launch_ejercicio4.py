from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    # Mantenemos el argumento del ejercicio anterior
    numero_argumento = DeclareLaunchArgument(
        'numero_argumento',
        default_value='7',
        description='Número entero para el campo numero'
    )

    # Definimos el nombre del grupo para luego añadirlo al namespace
    nombre_grupo = 'miGrupo'

    # Definimos el nodo publicador con el argumento
    nodo_publicador = Node(
        package='p2pkg',
        executable='server',
        namespace=nombre_grupo,
        name='publicador_ejercicio4',
        parameters=[{
            'numero': LaunchConfiguration('numero_argumento')
        }],
        remappings=[('topic_ejercicio2', 'topic_ejercicio2')]
    )

    # Definimos el nodo suscriptor
    nodo_suscriptor = Node(
        package='p2pkg',
        executable='client',
        namespace=nombre_grupo,
        name='suscriptor_ejercicio4',
        remappings=[('topic_ejercicio2', 'topic_ejercicio2')]
    )

    return LaunchDescription([
        numero_argumento,
        nodo_publicador,
        nodo_suscriptor
    ])