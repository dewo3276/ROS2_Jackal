// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wireless_msgs:msg/Quality.idl
// generated code does not contain a copyright notice
#include "wireless_msgs/msg/detail/quality__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `message_lengths`
// Member `latency_measurements`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
wireless_msgs__msg__Quality__init(wireless_msgs__msg__Quality * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    wireless_msgs__msg__Quality__fini(msg);
    return false;
  }
  // messages_received
  // messages_missed
  // total_length
  // message_lengths
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->message_lengths, 0)) {
    wireless_msgs__msg__Quality__fini(msg);
    return false;
  }
  // latency_avg
  // latency_measurements
  if (!rosidl_runtime_c__float__Sequence__init(&msg->latency_measurements, 0)) {
    wireless_msgs__msg__Quality__fini(msg);
    return false;
  }
  return true;
}

void
wireless_msgs__msg__Quality__fini(wireless_msgs__msg__Quality * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // messages_received
  // messages_missed
  // total_length
  // message_lengths
  rosidl_runtime_c__uint32__Sequence__fini(&msg->message_lengths);
  // latency_avg
  // latency_measurements
  rosidl_runtime_c__float__Sequence__fini(&msg->latency_measurements);
}

bool
wireless_msgs__msg__Quality__are_equal(const wireless_msgs__msg__Quality * lhs, const wireless_msgs__msg__Quality * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // messages_received
  if (lhs->messages_received != rhs->messages_received) {
    return false;
  }
  // messages_missed
  if (lhs->messages_missed != rhs->messages_missed) {
    return false;
  }
  // total_length
  if (lhs->total_length != rhs->total_length) {
    return false;
  }
  // message_lengths
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->message_lengths), &(rhs->message_lengths)))
  {
    return false;
  }
  // latency_avg
  if (lhs->latency_avg != rhs->latency_avg) {
    return false;
  }
  // latency_measurements
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->latency_measurements), &(rhs->latency_measurements)))
  {
    return false;
  }
  return true;
}

bool
wireless_msgs__msg__Quality__copy(
  const wireless_msgs__msg__Quality * input,
  wireless_msgs__msg__Quality * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // messages_received
  output->messages_received = input->messages_received;
  // messages_missed
  output->messages_missed = input->messages_missed;
  // total_length
  output->total_length = input->total_length;
  // message_lengths
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->message_lengths), &(output->message_lengths)))
  {
    return false;
  }
  // latency_avg
  output->latency_avg = input->latency_avg;
  // latency_measurements
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->latency_measurements), &(output->latency_measurements)))
  {
    return false;
  }
  return true;
}

wireless_msgs__msg__Quality *
wireless_msgs__msg__Quality__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wireless_msgs__msg__Quality * msg = (wireless_msgs__msg__Quality *)allocator.allocate(sizeof(wireless_msgs__msg__Quality), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wireless_msgs__msg__Quality));
  bool success = wireless_msgs__msg__Quality__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wireless_msgs__msg__Quality__destroy(wireless_msgs__msg__Quality * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wireless_msgs__msg__Quality__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wireless_msgs__msg__Quality__Sequence__init(wireless_msgs__msg__Quality__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wireless_msgs__msg__Quality * data = NULL;

  if (size) {
    data = (wireless_msgs__msg__Quality *)allocator.zero_allocate(size, sizeof(wireless_msgs__msg__Quality), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wireless_msgs__msg__Quality__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wireless_msgs__msg__Quality__fini(&data[i - 1]);
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
wireless_msgs__msg__Quality__Sequence__fini(wireless_msgs__msg__Quality__Sequence * array)
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
      wireless_msgs__msg__Quality__fini(&array->data[i]);
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

wireless_msgs__msg__Quality__Sequence *
wireless_msgs__msg__Quality__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wireless_msgs__msg__Quality__Sequence * array = (wireless_msgs__msg__Quality__Sequence *)allocator.allocate(sizeof(wireless_msgs__msg__Quality__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wireless_msgs__msg__Quality__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wireless_msgs__msg__Quality__Sequence__destroy(wireless_msgs__msg__Quality__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wireless_msgs__msg__Quality__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wireless_msgs__msg__Quality__Sequence__are_equal(const wireless_msgs__msg__Quality__Sequence * lhs, const wireless_msgs__msg__Quality__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wireless_msgs__msg__Quality__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wireless_msgs__msg__Quality__Sequence__copy(
  const wireless_msgs__msg__Quality__Sequence * input,
  wireless_msgs__msg__Quality__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wireless_msgs__msg__Quality);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wireless_msgs__msg__Quality * data =
      (wireless_msgs__msg__Quality *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wireless_msgs__msg__Quality__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wireless_msgs__msg__Quality__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wireless_msgs__msg__Quality__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
