// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wireless_msgs:msg/Connection.idl
// generated code does not contain a copyright notice
#include "wireless_msgs/msg/detail/connection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `link_quality_raw`
// Member `essid`
// Member `bssid`
#include "rosidl_runtime_c/string_functions.h"

bool
wireless_msgs__msg__Connection__init(wireless_msgs__msg__Connection * msg)
{
  if (!msg) {
    return false;
  }
  // bitrate
  // txpower
  // link_quality_raw
  if (!rosidl_runtime_c__String__init(&msg->link_quality_raw)) {
    wireless_msgs__msg__Connection__fini(msg);
    return false;
  }
  // link_quality
  // signal_level
  // noise_level
  // essid
  if (!rosidl_runtime_c__String__init(&msg->essid)) {
    wireless_msgs__msg__Connection__fini(msg);
    return false;
  }
  // bssid
  if (!rosidl_runtime_c__String__init(&msg->bssid)) {
    wireless_msgs__msg__Connection__fini(msg);
    return false;
  }
  // frequency
  return true;
}

void
wireless_msgs__msg__Connection__fini(wireless_msgs__msg__Connection * msg)
{
  if (!msg) {
    return;
  }
  // bitrate
  // txpower
  // link_quality_raw
  rosidl_runtime_c__String__fini(&msg->link_quality_raw);
  // link_quality
  // signal_level
  // noise_level
  // essid
  rosidl_runtime_c__String__fini(&msg->essid);
  // bssid
  rosidl_runtime_c__String__fini(&msg->bssid);
  // frequency
}

bool
wireless_msgs__msg__Connection__are_equal(const wireless_msgs__msg__Connection * lhs, const wireless_msgs__msg__Connection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bitrate
  if (lhs->bitrate != rhs->bitrate) {
    return false;
  }
  // txpower
  if (lhs->txpower != rhs->txpower) {
    return false;
  }
  // link_quality_raw
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->link_quality_raw), &(rhs->link_quality_raw)))
  {
    return false;
  }
  // link_quality
  if (lhs->link_quality != rhs->link_quality) {
    return false;
  }
  // signal_level
  if (lhs->signal_level != rhs->signal_level) {
    return false;
  }
  // noise_level
  if (lhs->noise_level != rhs->noise_level) {
    return false;
  }
  // essid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->essid), &(rhs->essid)))
  {
    return false;
  }
  // bssid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->bssid), &(rhs->bssid)))
  {
    return false;
  }
  // frequency
  if (lhs->frequency != rhs->frequency) {
    return false;
  }
  return true;
}

bool
wireless_msgs__msg__Connection__copy(
  const wireless_msgs__msg__Connection * input,
  wireless_msgs__msg__Connection * output)
{
  if (!input || !output) {
    return false;
  }
  // bitrate
  output->bitrate = input->bitrate;
  // txpower
  output->txpower = input->txpower;
  // link_quality_raw
  if (!rosidl_runtime_c__String__copy(
      &(input->link_quality_raw), &(output->link_quality_raw)))
  {
    return false;
  }
  // link_quality
  output->link_quality = input->link_quality;
  // signal_level
  output->signal_level = input->signal_level;
  // noise_level
  output->noise_level = input->noise_level;
  // essid
  if (!rosidl_runtime_c__String__copy(
      &(input->essid), &(output->essid)))
  {
    return false;
  }
  // bssid
  if (!rosidl_runtime_c__String__copy(
      &(input->bssid), &(output->bssid)))
  {
    return false;
  }
  // frequency
  output->frequency = input->frequency;
  return true;
}

wireless_msgs__msg__Connection *
wireless_msgs__msg__Connection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wireless_msgs__msg__Connection * msg = (wireless_msgs__msg__Connection *)allocator.allocate(sizeof(wireless_msgs__msg__Connection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wireless_msgs__msg__Connection));
  bool success = wireless_msgs__msg__Connection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wireless_msgs__msg__Connection__destroy(wireless_msgs__msg__Connection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wireless_msgs__msg__Connection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wireless_msgs__msg__Connection__Sequence__init(wireless_msgs__msg__Connection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wireless_msgs__msg__Connection * data = NULL;

  if (size) {
    data = (wireless_msgs__msg__Connection *)allocator.zero_allocate(size, sizeof(wireless_msgs__msg__Connection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wireless_msgs__msg__Connection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wireless_msgs__msg__Connection__fini(&data[i - 1]);
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
wireless_msgs__msg__Connection__Sequence__fini(wireless_msgs__msg__Connection__Sequence * array)
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
      wireless_msgs__msg__Connection__fini(&array->data[i]);
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

wireless_msgs__msg__Connection__Sequence *
wireless_msgs__msg__Connection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wireless_msgs__msg__Connection__Sequence * array = (wireless_msgs__msg__Connection__Sequence *)allocator.allocate(sizeof(wireless_msgs__msg__Connection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wireless_msgs__msg__Connection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wireless_msgs__msg__Connection__Sequence__destroy(wireless_msgs__msg__Connection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wireless_msgs__msg__Connection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wireless_msgs__msg__Connection__Sequence__are_equal(const wireless_msgs__msg__Connection__Sequence * lhs, const wireless_msgs__msg__Connection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wireless_msgs__msg__Connection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wireless_msgs__msg__Connection__Sequence__copy(
  const wireless_msgs__msg__Connection__Sequence * input,
  wireless_msgs__msg__Connection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wireless_msgs__msg__Connection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wireless_msgs__msg__Connection * data =
      (wireless_msgs__msg__Connection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wireless_msgs__msg__Connection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wireless_msgs__msg__Connection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wireless_msgs__msg__Connection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
