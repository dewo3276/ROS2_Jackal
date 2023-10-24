// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wireless_msgs:msg/Connection.idl
// generated code does not contain a copyright notice

#ifndef WIRELESS_MSGS__MSG__DETAIL__CONNECTION__STRUCT_H_
#define WIRELESS_MSGS__MSG__DETAIL__CONNECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'link_quality_raw'
// Member 'essid'
// Member 'bssid'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Connection in the package wireless_msgs.
typedef struct wireless_msgs__msg__Connection
{
  /// Mb/s
  float bitrate;
  /// dBm
  int16_t txpower;
  /// Fractional link quality number preserved in raw
  /// field, resolved to decimal for link_quality field.
  rosidl_runtime_c__String link_quality_raw;
  float link_quality;
  /// dBm
  int16_t signal_level;
  /// dBm
  int16_t noise_level;
  rosidl_runtime_c__String essid;
  rosidl_runtime_c__String bssid;
  double frequency;
} wireless_msgs__msg__Connection;

// Struct for a sequence of wireless_msgs__msg__Connection.
typedef struct wireless_msgs__msg__Connection__Sequence
{
  wireless_msgs__msg__Connection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wireless_msgs__msg__Connection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WIRELESS_MSGS__MSG__DETAIL__CONNECTION__STRUCT_H_
