// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wireless_msgs:msg/Network.idl
// generated code does not contain a copyright notice

#ifndef WIRELESS_MSGS__MSG__DETAIL__NETWORK__STRUCT_H_
#define WIRELESS_MSGS__MSG__DETAIL__NETWORK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
// Member 'essid'
// Member 'mac'
// Member 'mode'
// Member 'frequency'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Network in the package wireless_msgs.
typedef struct wireless_msgs__msg__Network
{
  rosidl_runtime_c__String type;
  rosidl_runtime_c__String essid;
  rosidl_runtime_c__String mac;
  rosidl_runtime_c__String mode;
  rosidl_runtime_c__String frequency;
  bool encryption;
} wireless_msgs__msg__Network;

// Struct for a sequence of wireless_msgs__msg__Network.
typedef struct wireless_msgs__msg__Network__Sequence
{
  wireless_msgs__msg__Network * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wireless_msgs__msg__Network__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WIRELESS_MSGS__MSG__DETAIL__NETWORK__STRUCT_H_
