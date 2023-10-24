// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wireless_msgs:msg/Quality.idl
// generated code does not contain a copyright notice

#ifndef WIRELESS_MSGS__MSG__DETAIL__QUALITY__STRUCT_H_
#define WIRELESS_MSGS__MSG__DETAIL__QUALITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'message_lengths'
// Member 'latency_measurements'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Quality in the package wireless_msgs.
typedef struct wireless_msgs__msg__Quality
{
  std_msgs__msg__Header header;
  uint16_t messages_received;
  uint16_t messages_missed;
  uint32_t total_length;
  rosidl_runtime_c__uint32__Sequence message_lengths;
  float latency_avg;
  rosidl_runtime_c__float__Sequence latency_measurements;
} wireless_msgs__msg__Quality;

// Struct for a sequence of wireless_msgs__msg__Quality.
typedef struct wireless_msgs__msg__Quality__Sequence
{
  wireless_msgs__msg__Quality * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wireless_msgs__msg__Quality__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WIRELESS_MSGS__MSG__DETAIL__QUALITY__STRUCT_H_
