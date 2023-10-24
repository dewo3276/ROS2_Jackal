// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wireless_msgs:msg/Scan.idl
// generated code does not contain a copyright notice

#ifndef WIRELESS_MSGS__MSG__DETAIL__SCAN__STRUCT_H_
#define WIRELESS_MSGS__MSG__DETAIL__SCAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'networks'
#include "wireless_msgs/msg/detail/network__struct.h"

/// Struct defined in msg/Scan in the package wireless_msgs.
typedef struct wireless_msgs__msg__Scan
{
  wireless_msgs__msg__Network__Sequence networks;
} wireless_msgs__msg__Scan;

// Struct for a sequence of wireless_msgs__msg__Scan.
typedef struct wireless_msgs__msg__Scan__Sequence
{
  wireless_msgs__msg__Scan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wireless_msgs__msg__Scan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WIRELESS_MSGS__MSG__DETAIL__SCAN__STRUCT_H_
