// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from wireless_msgs:msg/Connection.idl
// generated code does not contain a copyright notice
#include "wireless_msgs/msg/detail/connection__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "wireless_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "wireless_msgs/msg/detail/connection__struct.h"
#include "wireless_msgs/msg/detail/connection__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // bssid, essid, link_quality_raw
#include "rosidl_runtime_c/string_functions.h"  // bssid, essid, link_quality_raw

// forward declare type support functions


using _Connection__ros_msg_type = wireless_msgs__msg__Connection;

static bool _Connection__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Connection__ros_msg_type * ros_message = static_cast<const _Connection__ros_msg_type *>(untyped_ros_message);
  // Field name: bitrate
  {
    cdr << ros_message->bitrate;
  }

  // Field name: txpower
  {
    cdr << ros_message->txpower;
  }

  // Field name: link_quality_raw
  {
    const rosidl_runtime_c__String * str = &ros_message->link_quality_raw;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: link_quality
  {
    cdr << ros_message->link_quality;
  }

  // Field name: signal_level
  {
    cdr << ros_message->signal_level;
  }

  // Field name: noise_level
  {
    cdr << ros_message->noise_level;
  }

  // Field name: essid
  {
    const rosidl_runtime_c__String * str = &ros_message->essid;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: bssid
  {
    const rosidl_runtime_c__String * str = &ros_message->bssid;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: frequency
  {
    cdr << ros_message->frequency;
  }

  return true;
}

static bool _Connection__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Connection__ros_msg_type * ros_message = static_cast<_Connection__ros_msg_type *>(untyped_ros_message);
  // Field name: bitrate
  {
    cdr >> ros_message->bitrate;
  }

  // Field name: txpower
  {
    cdr >> ros_message->txpower;
  }

  // Field name: link_quality_raw
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->link_quality_raw.data) {
      rosidl_runtime_c__String__init(&ros_message->link_quality_raw);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->link_quality_raw,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'link_quality_raw'\n");
      return false;
    }
  }

  // Field name: link_quality
  {
    cdr >> ros_message->link_quality;
  }

  // Field name: signal_level
  {
    cdr >> ros_message->signal_level;
  }

  // Field name: noise_level
  {
    cdr >> ros_message->noise_level;
  }

  // Field name: essid
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->essid.data) {
      rosidl_runtime_c__String__init(&ros_message->essid);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->essid,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'essid'\n");
      return false;
    }
  }

  // Field name: bssid
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->bssid.data) {
      rosidl_runtime_c__String__init(&ros_message->bssid);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->bssid,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'bssid'\n");
      return false;
    }
  }

  // Field name: frequency
  {
    cdr >> ros_message->frequency;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wireless_msgs
size_t get_serialized_size_wireless_msgs__msg__Connection(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Connection__ros_msg_type * ros_message = static_cast<const _Connection__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name bitrate
  {
    size_t item_size = sizeof(ros_message->bitrate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name txpower
  {
    size_t item_size = sizeof(ros_message->txpower);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name link_quality_raw
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->link_quality_raw.size + 1);
  // field.name link_quality
  {
    size_t item_size = sizeof(ros_message->link_quality);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name signal_level
  {
    size_t item_size = sizeof(ros_message->signal_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name noise_level
  {
    size_t item_size = sizeof(ros_message->noise_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name essid
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->essid.size + 1);
  // field.name bssid
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->bssid.size + 1);
  // field.name frequency
  {
    size_t item_size = sizeof(ros_message->frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Connection__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_wireless_msgs__msg__Connection(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wireless_msgs
size_t max_serialized_size_wireless_msgs__msg__Connection(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: bitrate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: txpower
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: link_quality_raw
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: link_quality
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: signal_level
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: noise_level
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: essid
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: bssid
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: frequency
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Connection__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_wireless_msgs__msg__Connection(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Connection = {
  "wireless_msgs::msg",
  "Connection",
  _Connection__cdr_serialize,
  _Connection__cdr_deserialize,
  _Connection__get_serialized_size,
  _Connection__max_serialized_size
};

static rosidl_message_type_support_t _Connection__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Connection,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wireless_msgs, msg, Connection)() {
  return &_Connection__type_support;
}

#if defined(__cplusplus)
}
#endif
