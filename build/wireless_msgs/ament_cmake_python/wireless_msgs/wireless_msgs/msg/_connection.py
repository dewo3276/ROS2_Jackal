# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wireless_msgs:msg/Connection.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Connection(type):
    """Metaclass of message 'Connection'."""

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
                'wireless_msgs.msg.Connection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__connection
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__connection
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__connection
            cls._TYPE_SUPPORT = module.type_support_msg__msg__connection
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__connection

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Connection(metaclass=Metaclass_Connection):
    """Message class 'Connection'."""

    __slots__ = [
        '_bitrate',
        '_txpower',
        '_link_quality_raw',
        '_link_quality',
        '_signal_level',
        '_noise_level',
        '_essid',
        '_bssid',
        '_frequency',
    ]

    _fields_and_field_types = {
        'bitrate': 'float',
        'txpower': 'int16',
        'link_quality_raw': 'string',
        'link_quality': 'float',
        'signal_level': 'int16',
        'noise_level': 'int16',
        'essid': 'string',
        'bssid': 'string',
        'frequency': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bitrate = kwargs.get('bitrate', float())
        self.txpower = kwargs.get('txpower', int())
        self.link_quality_raw = kwargs.get('link_quality_raw', str())
        self.link_quality = kwargs.get('link_quality', float())
        self.signal_level = kwargs.get('signal_level', int())
        self.noise_level = kwargs.get('noise_level', int())
        self.essid = kwargs.get('essid', str())
        self.bssid = kwargs.get('bssid', str())
        self.frequency = kwargs.get('frequency', float())

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
        if self.bitrate != other.bitrate:
            return False
        if self.txpower != other.txpower:
            return False
        if self.link_quality_raw != other.link_quality_raw:
            return False
        if self.link_quality != other.link_quality:
            return False
        if self.signal_level != other.signal_level:
            return False
        if self.noise_level != other.noise_level:
            return False
        if self.essid != other.essid:
            return False
        if self.bssid != other.bssid:
            return False
        if self.frequency != other.frequency:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def bitrate(self):
        """Message field 'bitrate'."""
        return self._bitrate

    @bitrate.setter
    def bitrate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bitrate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'bitrate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._bitrate = value

    @builtins.property
    def txpower(self):
        """Message field 'txpower'."""
        return self._txpower

    @txpower.setter
    def txpower(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'txpower' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'txpower' field must be an integer in [-32768, 32767]"
        self._txpower = value

    @builtins.property
    def link_quality_raw(self):
        """Message field 'link_quality_raw'."""
        return self._link_quality_raw

    @link_quality_raw.setter
    def link_quality_raw(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'link_quality_raw' field must be of type 'str'"
        self._link_quality_raw = value

    @builtins.property
    def link_quality(self):
        """Message field 'link_quality'."""
        return self._link_quality

    @link_quality.setter
    def link_quality(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'link_quality' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'link_quality' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._link_quality = value

    @builtins.property
    def signal_level(self):
        """Message field 'signal_level'."""
        return self._signal_level

    @signal_level.setter
    def signal_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'signal_level' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'signal_level' field must be an integer in [-32768, 32767]"
        self._signal_level = value

    @builtins.property
    def noise_level(self):
        """Message field 'noise_level'."""
        return self._noise_level

    @noise_level.setter
    def noise_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'noise_level' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'noise_level' field must be an integer in [-32768, 32767]"
        self._noise_level = value

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
    def bssid(self):
        """Message field 'bssid'."""
        return self._bssid

    @bssid.setter
    def bssid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'bssid' field must be of type 'str'"
        self._bssid = value

    @builtins.property
    def frequency(self):
        """Message field 'frequency'."""
        return self._frequency

    @frequency.setter
    def frequency(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'frequency' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'frequency' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._frequency = value
