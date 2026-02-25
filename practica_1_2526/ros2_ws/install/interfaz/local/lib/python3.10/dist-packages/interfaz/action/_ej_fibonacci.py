# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaz:action/EjFibonacci.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EjFibonacci_Goal(type):
    """Metaclass of message 'EjFibonacci_Goal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaz')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaz.action.EjFibonacci_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__ej_fibonacci__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__ej_fibonacci__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__ej_fibonacci__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__ej_fibonacci__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__ej_fibonacci__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EjFibonacci_Goal(metaclass=Metaclass_EjFibonacci_Goal):
    """Message class 'EjFibonacci_Goal'."""

    __slots__ = [
        '_orden',
    ]

    _fields_and_field_types = {
        'orden': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.orden = kwargs.get('orden', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.orden != other.orden:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def orden(self):
        """Message field 'orden'."""
        return self._orden

    @orden.setter
    def orden(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'orden' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'orden' field must be an integer in [-2147483648, 2147483647]"
        self._orden = value


# Import statements for member types

# Member 'secuencia_final'
import array  # noqa: E402, I100

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_EjFibonacci_Result(type):
    """Metaclass of message 'EjFibonacci_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaz')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaz.action.EjFibonacci_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__ej_fibonacci__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__ej_fibonacci__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__ej_fibonacci__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__ej_fibonacci__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__ej_fibonacci__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EjFibonacci_Result(metaclass=Metaclass_EjFibonacci_Result):
    """Message class 'EjFibonacci_Result'."""

    __slots__ = [
        '_secuencia_final',
    ]

    _fields_and_field_types = {
        'secuencia_final': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.secuencia_final = array.array('i', kwargs.get('secuencia_final', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.secuencia_final != other.secuencia_final:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def secuencia_final(self):
        """Message field 'secuencia_final'."""
        return self._secuencia_final

    @secuencia_final.setter
    def secuencia_final(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'secuencia_final' array.array() must have the type code of 'i'"
            self._secuencia_final = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'secuencia_final' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._secuencia_final = array.array('i', value)


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_EjFibonacci_Feedback(type):
    """Metaclass of message 'EjFibonacci_Feedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaz')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaz.action.EjFibonacci_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__ej_fibonacci__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__ej_fibonacci__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__ej_fibonacci__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__ej_fibonacci__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__ej_fibonacci__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EjFibonacci_Feedback(metaclass=Metaclass_EjFibonacci_Feedback):
    """Message class 'EjFibonacci_Feedback'."""

    __slots__ = [
        '_raiz',
    ]

    _fields_and_field_types = {
        'raiz': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.raiz = kwargs.get('raiz', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.raiz != other.raiz:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def raiz(self):
        """Message field 'raiz'."""
        return self._raiz

    @raiz.setter
    def raiz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'raiz' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'raiz' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._raiz = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_EjFibonacci_SendGoal_Request(type):
    """Metaclass of message 'EjFibonacci_SendGoal_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaz')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaz.action.EjFibonacci_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__ej_fibonacci__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__ej_fibonacci__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__ej_fibonacci__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__ej_fibonacci__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__ej_fibonacci__send_goal__request

            from interfaz.action import EjFibonacci
            if EjFibonacci.Goal.__class__._TYPE_SUPPORT is None:
                EjFibonacci.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EjFibonacci_SendGoal_Request(metaclass=Metaclass_EjFibonacci_SendGoal_Request):
    """Message class 'EjFibonacci_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'interfaz/EjFibonacci_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['interfaz', 'action'], 'EjFibonacci_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from interfaz.action._ej_fibonacci import EjFibonacci_Goal
        self.goal = kwargs.get('goal', EjFibonacci_Goal())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from interfaz.action._ej_fibonacci import EjFibonacci_Goal
            assert \
                isinstance(value, EjFibonacci_Goal), \
                "The 'goal' field must be a sub message of type 'EjFibonacci_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_EjFibonacci_SendGoal_Response(type):
    """Metaclass of message 'EjFibonacci_SendGoal_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaz')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaz.action.EjFibonacci_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__ej_fibonacci__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__ej_fibonacci__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__ej_fibonacci__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__ej_fibonacci__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__ej_fibonacci__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EjFibonacci_SendGoal_Response(metaclass=Metaclass_EjFibonacci_SendGoal_Response):
    """Message class 'EjFibonacci_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_EjFibonacci_SendGoal(type):
    """Metaclass of service 'EjFibonacci_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaz')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaz.action.EjFibonacci_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__ej_fibonacci__send_goal

            from interfaz.action import _ej_fibonacci
            if _ej_fibonacci.Metaclass_EjFibonacci_SendGoal_Request._TYPE_SUPPORT is None:
                _ej_fibonacci.Metaclass_EjFibonacci_SendGoal_Request.__import_type_support__()
            if _ej_fibonacci.Metaclass_EjFibonacci_SendGoal_Response._TYPE_SUPPORT is None:
                _ej_fibonacci.Metaclass_EjFibonacci_SendGoal_Response.__import_type_support__()


class EjFibonacci_SendGoal(metaclass=Metaclass_EjFibonacci_SendGoal):
    from interfaz.action._ej_fibonacci import EjFibonacci_SendGoal_Request as Request
    from interfaz.action._ej_fibonacci import EjFibonacci_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_EjFibonacci_GetResult_Request(type):
    """Metaclass of message 'EjFibonacci_GetResult_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaz')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaz.action.EjFibonacci_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__ej_fibonacci__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__ej_fibonacci__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__ej_fibonacci__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__ej_fibonacci__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__ej_fibonacci__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EjFibonacci_GetResult_Request(metaclass=Metaclass_EjFibonacci_GetResult_Request):
    """Message class 'EjFibonacci_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_EjFibonacci_GetResult_Response(type):
    """Metaclass of message 'EjFibonacci_GetResult_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaz')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaz.action.EjFibonacci_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__ej_fibonacci__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__ej_fibonacci__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__ej_fibonacci__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__ej_fibonacci__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__ej_fibonacci__get_result__response

            from interfaz.action import EjFibonacci
            if EjFibonacci.Result.__class__._TYPE_SUPPORT is None:
                EjFibonacci.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EjFibonacci_GetResult_Response(metaclass=Metaclass_EjFibonacci_GetResult_Response):
    """Message class 'EjFibonacci_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'interfaz/EjFibonacci_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['interfaz', 'action'], 'EjFibonacci_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from interfaz.action._ej_fibonacci import EjFibonacci_Result
        self.result = kwargs.get('result', EjFibonacci_Result())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from interfaz.action._ej_fibonacci import EjFibonacci_Result
            assert \
                isinstance(value, EjFibonacci_Result), \
                "The 'result' field must be a sub message of type 'EjFibonacci_Result'"
        self._result = value


class Metaclass_EjFibonacci_GetResult(type):
    """Metaclass of service 'EjFibonacci_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaz')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaz.action.EjFibonacci_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__ej_fibonacci__get_result

            from interfaz.action import _ej_fibonacci
            if _ej_fibonacci.Metaclass_EjFibonacci_GetResult_Request._TYPE_SUPPORT is None:
                _ej_fibonacci.Metaclass_EjFibonacci_GetResult_Request.__import_type_support__()
            if _ej_fibonacci.Metaclass_EjFibonacci_GetResult_Response._TYPE_SUPPORT is None:
                _ej_fibonacci.Metaclass_EjFibonacci_GetResult_Response.__import_type_support__()


class EjFibonacci_GetResult(metaclass=Metaclass_EjFibonacci_GetResult):
    from interfaz.action._ej_fibonacci import EjFibonacci_GetResult_Request as Request
    from interfaz.action._ej_fibonacci import EjFibonacci_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_EjFibonacci_FeedbackMessage(type):
    """Metaclass of message 'EjFibonacci_FeedbackMessage'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaz')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaz.action.EjFibonacci_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__ej_fibonacci__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__ej_fibonacci__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__ej_fibonacci__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__ej_fibonacci__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__ej_fibonacci__feedback_message

            from interfaz.action import EjFibonacci
            if EjFibonacci.Feedback.__class__._TYPE_SUPPORT is None:
                EjFibonacci.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EjFibonacci_FeedbackMessage(metaclass=Metaclass_EjFibonacci_FeedbackMessage):
    """Message class 'EjFibonacci_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'interfaz/EjFibonacci_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['interfaz', 'action'], 'EjFibonacci_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from interfaz.action._ej_fibonacci import EjFibonacci_Feedback
        self.feedback = kwargs.get('feedback', EjFibonacci_Feedback())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from interfaz.action._ej_fibonacci import EjFibonacci_Feedback
            assert \
                isinstance(value, EjFibonacci_Feedback), \
                "The 'feedback' field must be a sub message of type 'EjFibonacci_Feedback'"
        self._feedback = value


class Metaclass_EjFibonacci(type):
    """Metaclass of action 'EjFibonacci'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaz')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaz.action.EjFibonacci')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__ej_fibonacci

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from interfaz.action import _ej_fibonacci
            if _ej_fibonacci.Metaclass_EjFibonacci_SendGoal._TYPE_SUPPORT is None:
                _ej_fibonacci.Metaclass_EjFibonacci_SendGoal.__import_type_support__()
            if _ej_fibonacci.Metaclass_EjFibonacci_GetResult._TYPE_SUPPORT is None:
                _ej_fibonacci.Metaclass_EjFibonacci_GetResult.__import_type_support__()
            if _ej_fibonacci.Metaclass_EjFibonacci_FeedbackMessage._TYPE_SUPPORT is None:
                _ej_fibonacci.Metaclass_EjFibonacci_FeedbackMessage.__import_type_support__()


class EjFibonacci(metaclass=Metaclass_EjFibonacci):

    # The goal message defined in the action definition.
    from interfaz.action._ej_fibonacci import EjFibonacci_Goal as Goal
    # The result message defined in the action definition.
    from interfaz.action._ej_fibonacci import EjFibonacci_Result as Result
    # The feedback message defined in the action definition.
    from interfaz.action._ej_fibonacci import EjFibonacci_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from interfaz.action._ej_fibonacci import EjFibonacci_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from interfaz.action._ej_fibonacci import EjFibonacci_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from interfaz.action._ej_fibonacci import EjFibonacci_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
