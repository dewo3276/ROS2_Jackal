// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from wireless_msgs:msg/Quality.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "wireless_msgs/msg/detail/quality__rosidl_typesupport_introspection_c.h"
#include "wireless_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "wireless_msgs/msg/detail/quality__functions.h"
#include "wireless_msgs/msg/detail/quality__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `message_lengths`
// Member `latency_measurements`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__Quality_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  wireless_msgs__msg__Quality__init(message_memory);
}

void wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__Quality_fini_function(void * message_memory)
{
  wireless_msgs__msg__Quality__fini(message_memory);
}

size_t wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__size_function__Quality__message_lengths(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__get_const_function__Quality__message_lengths(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__get_function__Quality__message_lengths(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__fetch_function__Quality__message_lengths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__get_const_function__Quality__message_lengths(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__assign_function__Quality__message_lengths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__get_function__Quality__message_lengths(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__resize_function__Quality__message_lengths(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__size_function__Quality__latency_measurements(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__get_const_function__Quality__latency_measurements(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__get_function__Quality__latency_measurements(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__fetch_function__Quality__latency_measurements(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__get_const_function__Quality__latency_measurements(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__assign_function__Quality__latency_measurements(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__get_function__Quality__latency_measurements(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__resize_function__Quality__latency_measurements(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__Quality_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wireless_msgs__msg__Quality, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "messages_received",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wireless_msgs__msg__Quality, messages_received),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "messages_missed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wireless_msgs__msg__Quality, messages_missed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wireless_msgs__msg__Quality, total_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message_lengths",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wireless_msgs__msg__Quality, message_lengths),  // bytes offset in struct
    NULL,  // default value
    wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__size_function__Quality__message_lengths,  // size() function pointer
    wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__get_const_function__Quality__message_lengths,  // get_const(index) function pointer
    wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__get_function__Quality__message_lengths,  // get(index) function pointer
    wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__fetch_function__Quality__message_lengths,  // fetch(index, &value) function pointer
    wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__assign_function__Quality__message_lengths,  // assign(index, value) function pointer
    wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__resize_function__Quality__message_lengths  // resize(index) function pointer
  },
  {
    "latency_avg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wireless_msgs__msg__Quality, latency_avg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "latency_measurements",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wireless_msgs__msg__Quality, latency_measurements),  // bytes offset in struct
    NULL,  // default value
    wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__size_function__Quality__latency_measurements,  // size() function pointer
    wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__get_const_function__Quality__latency_measurements,  // get_const(index) function pointer
    wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__get_function__Quality__latency_measurements,  // get(index) function pointer
    wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__fetch_function__Quality__latency_measurements,  // fetch(index, &value) function pointer
    wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__assign_function__Quality__latency_measurements,  // assign(index, value) function pointer
    wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__resize_function__Quality__latency_measurements  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__Quality_message_members = {
  "wireless_msgs__msg",  // message namespace
  "Quality",  // message name
  7,  // number of fields
  sizeof(wireless_msgs__msg__Quality),
  wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__Quality_message_member_array,  // message members
  wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__Quality_init_function,  // function to initialize message memory (memory has to be allocated)
  wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__Quality_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__Quality_message_type_support_handle = {
  0,
  &wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__Quality_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wireless_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wireless_msgs, msg, Quality)() {
  wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__Quality_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__Quality_message_type_support_handle.typesupport_identifier) {
    wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__Quality_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &wireless_msgs__msg__Quality__rosidl_typesupport_introspection_c__Quality_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
