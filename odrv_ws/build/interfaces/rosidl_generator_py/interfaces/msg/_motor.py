# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:msg/Motor.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Motor(type):
    """Metaclass of message 'Motor'."""

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
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.msg.Motor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Motor(metaclass=Metaclass_Motor):
    """Message class 'Motor'."""

    __slots__ = [
        '_velocidad_d',
        '_torque_d',
        '_velocidad_i',
        '_torque_i',
    ]

    _fields_and_field_types = {
        'velocidad_d': 'float',
        'torque_d': 'float',
        'velocidad_i': 'float',
        'torque_i': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.velocidad_d = kwargs.get('velocidad_d', float())
        self.torque_d = kwargs.get('torque_d', float())
        self.velocidad_i = kwargs.get('velocidad_i', float())
        self.torque_i = kwargs.get('torque_i', float())

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
        if self.velocidad_d != other.velocidad_d:
            return False
        if self.torque_d != other.torque_d:
            return False
        if self.velocidad_i != other.velocidad_i:
            return False
        if self.torque_i != other.torque_i:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def velocidad_d(self):
        """Message field 'velocidad_d'."""
        return self._velocidad_d

    @velocidad_d.setter
    def velocidad_d(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocidad_d' field must be of type 'float'"
        self._velocidad_d = value

    @property
    def torque_d(self):
        """Message field 'torque_d'."""
        return self._torque_d

    @torque_d.setter
    def torque_d(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'torque_d' field must be of type 'float'"
        self._torque_d = value

    @property
    def velocidad_i(self):
        """Message field 'velocidad_i'."""
        return self._velocidad_i

    @velocidad_i.setter
    def velocidad_i(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocidad_i' field must be of type 'float'"
        self._velocidad_i = value

    @property
    def torque_i(self):
        """Message field 'torque_i'."""
        return self._torque_i

    @torque_i.setter
    def torque_i(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'torque_i' field must be of type 'float'"
        self._torque_i = value
