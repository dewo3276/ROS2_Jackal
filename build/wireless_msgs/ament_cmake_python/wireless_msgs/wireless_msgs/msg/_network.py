# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wireless_msgs:msg/Network.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Network(type):
    """Metaclass of message 'Network'."""

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
            module = import_type_support('wireless_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'wireless_msgs.msg.Network')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__network
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__network
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__network
            cls._TYPE_SUPPORT = module.type_support_msg__msg__network
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__network

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Network(metaclass=Metaclass_Network):
    """Message class 'Network'."""

    __slots__ = [
        '_type',
        '_essid',
        '_mac',
        '_mode',
        '_frequency',
        '_encryption',
    ]

    _fields_and_field_types = {
        'type': 'string',
        'essid': 'string',
        'mac': 'string',
        'mode': 'string',
        'frequency': 'string',
        'encryption': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', str())
        self.essid = kwargs.get('essid', str())
        self.mac = kwargs.get('mac', str())
        self.mode = kwargs.get('mode', str())
        self.frequency = kwargs.get('frequency', str())
        self.encryption = kwargs.get('encryption', bool())

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
        if self.type != other.type:
            return False
        if self.essid != other.essid:
            return False
        if self.mac != other.mac:
            return False
        if self.mode != other.mode:
            return False
        if self.frequency != other.frequency:
            return False
        if self.encryption != other.encryption:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'type' field must be of type 'str'"
        self._type = value

    @builtins.property
    def essid(self):
        """Message field 'essid'."""
        return self._essid

    @essid.setter
    def essid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'essid' field must be of type 'str'"
        self._essid = value

    @builtins.property
    def mac(self):
        """Message field 'mac'."""
        return self._mac

    @mac.setter
    def mac(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mac' field must be of type 'str'"
        self._mac = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mode' field must be of type 'str'"
        self._mode = value

    @builtins.property
    def frequency(self):
        """Message field 'frequency'."""
        return self._frequency

    @frequency.setter
    def frequency(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'frequency' field must be of type 'str'"
        self._frequency = value

    @builtins.property
    def encryption(self):
        """Message field 'encryption'."""
        return self._encryption

    @encryption.setter
    def encryption(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'encryption' field must be of type 'bool'"
        self._encryption = value
