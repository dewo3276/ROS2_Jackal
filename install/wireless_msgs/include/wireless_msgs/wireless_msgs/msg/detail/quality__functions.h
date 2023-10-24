// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from wireless_msgs:msg/Quality.idl
// generated code does not contain a copyright notice

#ifndef WIRELESS_MSGS__MSG__DETAIL__QUALITY__FUNCTIONS_H_
#define WIRELESS_MSGS__MSG__DETAIL__QUALITY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "wireless_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "wireless_msgs/msg/detail/quality__struct.h"

/// Initialize msg/Quality message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wireless_msgs__msg__Quality
 * )) before or use
 * wireless_msgs__msg__Quality__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wireless_msgs
bool
wireless_msgs__msg__Quality__init(wireless_msgs__msg__Quality * msg);

/// Finalize msg/Quality message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wireless_msgs
void
wireless_msgs__msg__Quality__fini(wireless_msgs__msg__Quality * msg);

/// Create msg/Quality message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wireless_msgs__msg__Quality__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wireless_msgs
wireless_msgs__msg__Quality *
wireless_msgs__msg__Quality__create();

/// Destroy msg/Quality message.
/**
 * It calls
 * wireless_msgs__msg__Quality__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wireless_msgs
void
wireless_msgs__msg__Quality__destroy(wireless_msgs__msg__Quality * msg);

/// Check for msg/Quality message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wireless_msgs
bool
wireless_msgs__msg__Quality__are_equal(const wireless_msgs__msg__Quality * lhs, const wireless_msgs__msg__Quality * rhs);

/// Copy a msg/Quality message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_wireless_msgs
bool
wireless_msgs__msg__Quality__copy(
  const wireless_msgs__msg__Quality * input,
  wireless_msgs__msg__Quality * output);

/// Initialize array of msg/Quality messages.
/**
 * It allocates the memory for the number of elements and calls
 * wireless_msgs__msg__Quality__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wireless_msgs
bool
wireless_msgs__msg__Quality__Sequence__init(wireless_msgs__msg__Quality__Sequence * array, size_t size);

/// Finalize array of msg/Quality messages.
/**
 * It calls
 * wireless_msgs__msg__Quality__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wireless_msgs
void
wireless_msgs__msg__Quality__Sequence__fini(wireless_msgs__msg__Quality__Sequence * array);

/// Create array of msg/Quality messages.
/**
 * It allocates the memory for the array and calls
 * wireless_msgs__msg__Quality__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wireless_msgs
wireless_msgs__msg__Quality__Sequence *
wireless_msgs__msg__Quality__Sequence__create(size_t size);

/// Destroy array of msg/Quality messages.
/**
 * It calls
 * wireless_msgs__msg__Quality__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wireless_msgs
void
wireless_msgs__msg__Quality__Sequence__destroy(wireless_msgs__msg__Quality__Sequence * array);

/// Check for msg/Quality message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wireless_msgs
bool
wireless_msgs__msg__Quality__Sequence__are_equal(const wireless_msgs__msg__Quality__Sequence * lhs, const wireless_msgs__msg__Quality__Sequence * rhs);

/// Copy an array of msg/Quality messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_wireless_msgs
bool
wireless_msgs__msg__Quality__Sequence__copy(
  const wireless_msgs__msg__Quality__Sequence * input,
  wireless_msgs__msg__Quality__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WIRELESS_MSGS__MSG__DETAIL__QUALITY__FUNCTIONS_H_
