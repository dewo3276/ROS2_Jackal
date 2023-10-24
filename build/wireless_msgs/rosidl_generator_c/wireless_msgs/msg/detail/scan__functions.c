// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wireless_msgs:msg/Scan.idl
// generated code does not contain a copyright notice
#include "wireless_msgs/msg/detail/scan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `networks`
#include "wireless_msgs/msg/detail/network__functions.h"

bool
wireless_msgs__msg__Scan__init(wireless_msgs__msg__Scan * msg)
{
  if (!msg) {
    return false;
  }
  // networks
  if (!wireless_msgs__msg__Network__Sequence__init(&msg->networks, 0)) {
    wireless_msgs__msg__Scan__fini(msg);
    return false;
  }
  return true;
}

void
wireless_msgs__msg__Scan__fini(wireless_msgs__msg__Scan * msg)
{
  if (!msg) {
    return;
  }
  // networks
  wireless_msgs__msg__Network__Sequence__fini(&msg->networks);
}

bool
wireless_msgs__msg__Scan__are_equal(const wireless_msgs__msg__Scan * lhs, const wireless_msgs__msg__Scan * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // networks
  if (!wireless_msgs__msg__Network__Sequence__are_equal(
      &(lhs->networks), &(rhs->networks)))
  {
    return false;
  }
  return true;
}

bool
wireless_msgs__msg__Scan__copy(
  const wireless_msgs__msg__Scan * input,
  wireless_msgs__msg__Scan * output)
{
  if (!input || !output) {
    return false;
  }
  // networks
  if (!wireless_msgs__msg__Network__Sequence__copy(
      &(input->networks), &(output->networks)))
  {
    return false;
  }
  return true;
}

wireless_msgs__msg__Scan *
wireless_msgs__msg__Scan__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wireless_msgs__msg__Scan * msg = (wireless_msgs__msg__Scan *)allocator.allocate(sizeof(wireless_msgs__msg__Scan), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wireless_msgs__msg__Scan));
  bool success = wireless_msgs__msg__Scan__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wireless_msgs__msg__Scan__destroy(wireless_msgs__msg__Scan * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wireless_msgs__msg__Scan__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wireless_msgs__msg__Scan__Sequence__init(wireless_msgs__msg__Scan__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wireless_msgs__msg__Scan * data = NULL;

  if (size) {
    data = (wireless_msgs__msg__Scan *)allocator.zero_allocate(size, sizeof(wireless_msgs__msg__Scan), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wireless_msgs__msg__Scan__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wireless_msgs__msg__Scan__fini(&data[i - 1]);
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
wireless_msgs__msg__Scan__Sequence__fini(wireless_msgs__msg__Scan__Sequence * array)
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
      wireless_msgs__msg__Scan__fini(&array->data[i]);
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

wireless_msgs__msg__Scan__Sequence *
wireless_msgs__msg__Scan__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wireless_msgs__msg__Scan__Sequence * array = (wireless_msgs__msg__Scan__Sequence *)allocator.allocate(sizeof(wireless_msgs__msg__Scan__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wireless_msgs__msg__Scan__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wireless_msgs__msg__Scan__Sequence__destroy(wireless_msgs__msg__Scan__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wireless_msgs__msg__Scan__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wireless_msgs__msg__Scan__Sequence__are_equal(const wireless_msgs__msg__Scan__Sequence * lhs, const wireless_msgs__msg__Scan__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wireless_msgs__msg__Scan__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wireless_msgs__msg__Scan__Sequence__copy(
  const wireless_msgs__msg__Scan__Sequence * input,
  wireless_msgs__msg__Scan__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wireless_msgs__msg__Scan);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wireless_msgs__msg__Scan * data =
      (wireless_msgs__msg__Scan *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wireless_msgs__msg__Scan__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wireless_msgs__msg__Scan__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wireless_msgs__msg__Scan__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
