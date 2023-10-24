// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wireless_msgs:msg/Network.idl
// generated code does not contain a copyright notice
#include "wireless_msgs/msg/detail/network__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type`
// Member `essid`
// Member `mac`
// Member `mode`
// Member `frequency`
#include "rosidl_runtime_c/string_functions.h"

bool
wireless_msgs__msg__Network__init(wireless_msgs__msg__Network * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    wireless_msgs__msg__Network__fini(msg);
    return false;
  }
  // essid
  if (!rosidl_runtime_c__String__init(&msg->essid)) {
    wireless_msgs__msg__Network__fini(msg);
    return false;
  }
  // mac
  if (!rosidl_runtime_c__String__init(&msg->mac)) {
    wireless_msgs__msg__Network__fini(msg);
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__init(&msg->mode)) {
    wireless_msgs__msg__Network__fini(msg);
    return false;
  }
  // frequency
  if (!rosidl_runtime_c__String__init(&msg->frequency)) {
    wireless_msgs__msg__Network__fini(msg);
    return false;
  }
  // encryption
  return true;
}

void
wireless_msgs__msg__Network__fini(wireless_msgs__msg__Network * msg)
{
  if (!msg) {
    return;
  }
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // essid
  rosidl_runtime_c__String__fini(&msg->essid);
  // mac
  rosidl_runtime_c__String__fini(&msg->mac);
  // mode
  rosidl_runtime_c__String__fini(&msg->mode);
  // frequency
  rosidl_runtime_c__String__fini(&msg->frequency);
  // encryption
}

bool
wireless_msgs__msg__Network__are_equal(const wireless_msgs__msg__Network * lhs, const wireless_msgs__msg__Network * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // essid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->essid), &(rhs->essid)))
  {
    return false;
  }
  // mac
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mac), &(rhs->mac)))
  {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mode), &(rhs->mode)))
  {
    return false;
  }
  // frequency
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frequency), &(rhs->frequency)))
  {
    return false;
  }
  // encryption
  if (lhs->encryption != rhs->encryption) {
    return false;
  }
  return true;
}

bool
wireless_msgs__msg__Network__copy(
  const wireless_msgs__msg__Network * input,
  wireless_msgs__msg__Network * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // essid
  if (!rosidl_runtime_c__String__copy(
      &(input->essid), &(output->essid)))
  {
    return false;
  }
  // mac
  if (!rosidl_runtime_c__String__copy(
      &(input->mac), &(output->mac)))
  {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__copy(
      &(input->mode), &(output->mode)))
  {
    return false;
  }
  // frequency
  if (!rosidl_runtime_c__String__copy(
      &(input->frequency), &(output->frequency)))
  {
    return false;
  }
  // encryption
  output->encryption = input->encryption;
  return true;
}

wireless_msgs__msg__Network *
wireless_msgs__msg__Network__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wireless_msgs__msg__Network * msg = (wireless_msgs__msg__Network *)allocator.allocate(sizeof(wireless_msgs__msg__Network), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wireless_msgs__msg__Network));
  bool success = wireless_msgs__msg__Network__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wireless_msgs__msg__Network__destroy(wireless_msgs__msg__Network * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wireless_msgs__msg__Network__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wireless_msgs__msg__Network__Sequence__init(wireless_msgs__msg__Network__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wireless_msgs__msg__Network * data = NULL;

  if (size) {
    data = (wireless_msgs__msg__Network *)allocator.zero_allocate(size, sizeof(wireless_msgs__msg__Network), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wireless_msgs__msg__Network__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wireless_msgs__msg__Network__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
wireless_msgs__msg__Network__Sequence__fini(wireless_msgs__msg__Network__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      wireless_msgs__msg__Network__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

wireless_msgs__msg__Network__Sequence *
wireless_msgs__msg__Network__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wireless_msgs__msg__Network__Sequence * array = (wireless_msgs__msg__Network__Sequence *)allocator.allocate(sizeof(wireless_msgs__msg__Network__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wireless_msgs__msg__Network__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wireless_msgs__msg__Network__Sequence__destroy(wireless_msgs__msg__Network__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wireless_msgs__msg__Network__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wireless_msgs__msg__Network__Sequence__are_equal(const wireless_msgs__msg__Network__Sequence * lhs, const wireless_msgs__msg__Network__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wireless_msgs__msg__Network__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wireless_msgs__msg__Network__Sequence__copy(
  const wireless_msgs__msg__Network__Sequence * input,
  wireless_msgs__msg__Network__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wireless_msgs__msg__Network);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wireless_msgs__msg__Network * data =
      (wireless_msgs__msg__Network *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wireless_msgs__msg__Network__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wireless_msgs__msg__Network__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wireless_msgs__msg__Network__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
