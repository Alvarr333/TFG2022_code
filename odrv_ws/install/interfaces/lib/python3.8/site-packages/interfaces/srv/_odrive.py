# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:srv/Odrive.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Odrive_Request(type):
    """Metaclass of message 'Odrive_Request'."""

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
                'interfaces.srv.Odrive_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__odrive__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__odrive__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__odrive__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__odrive__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__odrive__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Odrive_Request(metaclass=Metaclass_Odrive_Request):
    """Message class 'Odrive_Request'."""

    __slots__ = [
        '_axis',
        '_idle',
        '_calibration',
        '_giro',
        '_ang',
        '_control_mode',
        '_pos',
        '_vel',
        '_torque',
    ]

    _fields_and_field_types = {
        'axis': 'int32',
        'idle': 'boolean',
        'calibration': 'boolean',
        'giro': 'boolean',
        'ang': 'float',
        'control_mode': 'int64',
        'pos': 'float',
        'vel': 'float',
        'torque': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.axis = kwargs.get('axis', int())
        self.idle = kwargs.get('idle', bool())
        self.calibration = kwargs.get('calibration', bool())
        self.giro = kwargs.get('giro', bool())
        self.ang = kwargs.get('ang', float())
        self.control_mode = kwargs.get('control_mode', int())
        self.pos = kwargs.get('pos', float())
        self.vel = kwargs.get('vel', float())
        self.torque = kwargs.get('torque', float())

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
        if self.axis != other.axis:
            return False
        if self.idle != other.idle:
            return False
        if self.calibration != other.calibration:
            return False
        if self.giro != other.giro:
            return False
        if self.ang != other.ang:
            return False
        if self.control_mode != other.control_mode:
            return False
        if self.pos != other.pos:
            return False
        if self.vel != other.vel:
            return False
        if self.torque != other.torque:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def axis(self):
        """Message field 'axis'."""
        return self._axis

    @axis.setter
    def axis(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'axis' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'axis' field must be an integer in [-2147483648, 2147483647]"
        self._axis = value

    @property
    def idle(self):
        """Message field 'idle'."""
        return self._idle

    @idle.setter
    def idle(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'idle' field must be of type 'bool'"
        self._idle = value

    @property
    def calibration(self):
        """Message field 'calibration'."""
        return self._calibration

    @calibration.setter
    def calibration(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'calibration' field must be of type 'bool'"
        self._calibration = value

    @property
    def giro(self):
        """Message field 'giro'."""
        return self._giro

    @giro.setter
    def giro(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'giro' field must be of type 'bool'"
        self._giro = value

    @property
    def ang(self):
        """Message field 'ang'."""
        return self._ang

    @ang.setter
    def ang(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ang' field must be of type 'float'"
        self._ang = value

    @property
    def control_mode(self):
        """Message field 'control_mode'."""
        return self._control_mode

    @control_mode.setter
    def control_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'control_mode' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'control_mode' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._control_mode = value

    @property
    def pos(self):
        """Message field 'pos'."""
        return self._pos

    @pos.setter
    def pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos' field must be of type 'float'"
        self._pos = value

    @property
    def vel(self):
        """Message field 'vel'."""
        return self._vel

    @vel.setter
    def vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel' field must be of type 'float'"
        self._vel = value

    @property
    def torque(self):
        """Message field 'torque'."""
        return self._torque

    @torque.setter
    def torque(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'torque' field must be of type 'float'"
        self._torque = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Odrive_Response(type):
    """Metaclass of message 'Odrive_Response'."""

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
                'interfaces.srv.Odrive_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__odrive__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__odrive__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__odrive__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__odrive__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__odrive__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Odrive_Response(metaclass=Metaclass_Odrive_Response):
    """Message class 'Odrive_Response'."""

    __slots__ = [
        '_ack',
    ]

    _fields_and_field_types = {
        'ack': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ack = kwargs.get('ack', str())

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
        if self.ack != other.ack:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def ack(self):
        """Message field 'ack'."""
        return self._ack

    @ack.setter
    def ack(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ack' field must be of type 'str'"
        self._ack = value


class Metaclass_Odrive(type):
    """Metaclass of service 'Odrive'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.srv.Odrive')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__odrive

            from interfaces.srv import _odrive
            if _odrive.Metaclass_Odrive_Request._TYPE_SUPPORT is None:
                _odrive.Metaclass_Odrive_Request.__import_type_support__()
            if _odrive.Metaclass_Odrive_Response._TYPE_SUPPORT is None:
                _odrive.Metaclass_Odrive_Response.__import_type_support__()


class Odrive(metaclass=Metaclass_Odrive):
    from interfaces.srv._odrive import Odrive_Request as Request
    from interfaces.srv._odrive import Odrive_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
