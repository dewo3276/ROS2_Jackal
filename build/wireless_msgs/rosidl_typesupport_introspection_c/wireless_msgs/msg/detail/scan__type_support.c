// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from wireless_msgs:msg/Scan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "wireless_msgs/msg/detail/scan__rosidl_typesupport_introspection_c.h"
#include "wireless_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "wireless_msgs/msg/detail/scan__functions.h"
#include "wireless_msgs/msg/detail/scan__struct.h"


// Include directives for member types
// Member `networks`
#include "wireless_msgs/msg/network.h"
// Member `networks`
#include "wireless_msgs/msg/detail/network__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void wireless_msgs__msg__Scan__rosidl_typesupport_introspection_c__Scan_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  wireless_msgs__msg__Scan__init(message_memory);
}

void wireless_msgs__msg__Scan__rosidl_typesupport_introspection_c__Scan_fini_function(void * message_memory)
{
  wireless_msgs__msg__Scan__fini(message_memory);
}

size_t wireless_msgs__msg__Scan__rosidl_typesupport_introspection_c__size_function__Scan__networks(
  const void * untyped_member)
{
  const wireless_msgs__msg__Network__Sequence * member =
    (const wireless_msgs__msg__Network__Sequence *)(untyped_member);
  return member->size;
}

const void * wireless_msgs__msg__Scan__rosidl_typesupport_introspection_c__get_const_function__Scan__networks(
  const void * untyped_member, size_t index)
{
  const wireless_msgs__msg__Network__Sequence * member =
    (const wireless_msgs__msg__Network__Sequence *)(untyped_member);
  return &member->data[index];
}

void * wireless_msgs__msg__Scan__rosidl_typesupport_introspection_c__get_function__Scan__networks(
  void * untyped_member, size_t index)
{
  wireless_msgs__msg__Network__Sequence * member =
    (wireless_msgs__msg__Network__Sequence *)(untyped_member);
  return &member->data[index];
}

void wireless_msgs__msg__Scan__rosidl_typesupport_introspection_c__fetch_function__Scan__networks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const wireless_msgs__msg__Network * item =
    ((const wireless_msgs__msg__Network *)
    wireless_msgs__msg__Scan__rosidl_typesupport_introspection_c__get_const_function__Scan__networks(untyped_member, index));
  wireless_msgs__msg__Network * value =
    (wireless_msgs__msg__Network *)(untyped_value);
  *value = *item;
}

void wireless_msgs__msg__Scan__rosidl_typesupport_introspection_c__assign_function__Scan__networks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  wireless_msgs__msg__Network * item =
    ((wireless_msgs__msg__Network *)
    wireless_msgs__msg__Scan__rosidl_typesupport_introspection_c__get_function__Scan__networks(untyped_member, index));
  const wireless_msgs__msg__Network * value =
    (const wireless_msgs__msg__Network *)(untyped_value);
  *item = *value;
}

bool wireless_msgs__msg__Scan__rosidl_typesupport_introspection_c__resize_function__Scan__networks(
  void * untyped_member, size_t size)
{
  wireless_msgs__msg__Network__Sequence * member =
    (wireless_msgs__msg__Network__Sequence *)(untyped_member);
  wireless_msgs__msg__Network__Sequence__fini(member);
  return wireless_msgs__msg__Network__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember wireless_msgs__msg__Scan__rosidl_typesupport_introspection_c__Scan_message_member_array[1] = {
  {
    "networks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wireless_msgs__msg__Scan, networks),  // bytes offset in struct
    NULL,  // default value
    wireless_msgs__msg__Scan__rosidl_typesupport_introspection_c__size_function__Scan__networks,  // size() function pointer
    wireless_msgs__msg__Scan__rosidl_typesupport_introspection_c__get_const_function__Scan__networks,  // get_const(index) function pointer
    wireless_msgs__msg__Scan__rosidl_typesupport_introspection_c__get_function__Scan__networks,  // get(index) function pointer
    wireless_msgs__msg__Scan__rosidl_typesupport_introspection_c__fetch_function__Scan__networks,  // fetch(index, &value) function pointer
    wireless_msgs__msg__Scan__rosidl_typesupport_introspection_c__assign_function__Scan__networks,  // assign(index, value) function pointer
    wireless_msgs__msg__Scan__rosidl_typesupport_introspection_c__resize_function__Scan__networks  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers wireless_msgs__msg__Scan__rosidl_typesupport_introspection_c__Scan_message_members = {
  "wireless_msgs__msg",  // message namespace
  "Scan",  // message name
  1,  // number of fields
  sizeof(wireless_msgs__msg__Scan),
  wireless_msgs__msg__Scan__rosidl_typesupport_introspection_c__Scan_message_member_array,  // message members
  wireless_msgs__msg__Scan__rosidl_typesupport_introspection_c__Scan_init_function,  // function to initialize message memory (memory has to be allocated)
  wireless_msgs__msg__Scan__rosidl_typesupport_introspection_c__Scan_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t wireless_msgs__msg__Scan__rosidl_typesupport_introspection_c__Scan_message_type_support_handle = {
  0,
  &wireless_msgs__msg__Scan__rosidl_typesupport_introspection_c__Scan_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wireless_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wireless_msgs, msg, Scan)() {
  wireless_msgs__msg__Scan__rosidl_typesupport_introspection_c__Scan_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wireless_msgs, msg, Network)();
  if (!wireless_msgs__msg__Scan__rosidl_typesupport_introspection_c__Scan_message_type_support_handle.typesupport_identifier) {
    wireless_msgs__msg__Scan__rosidl_typesupport_introspection_c__Scan_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &wireless_msgs__msg__Scan__rosidl_typesupport_introspection_c__Scan_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
