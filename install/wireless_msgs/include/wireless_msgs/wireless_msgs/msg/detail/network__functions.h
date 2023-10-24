// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from wireless_msgs:msg/Network.idl
// generated code does not contain a copyright notice

#ifndef WIRELESS_MSGS__MSG__DETAIL__NETWORK__FUNCTIONS_H_
#define WIRELESS_MSGS__MSG__DETAIL__NETWORK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "wireless_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "wireless_msgs/msg/detail/network__struct.h"

/// Initialize msg/Network message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wireless_msgs__msg__Network
 * )) before or use
 * wireless_msgs__msg__Network__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wireless_msgs
bool
wireless_msgs__msg__Network__init(wireless_msgs__msg__Network * msg);

/// Finalize msg/Network message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wireless_msgs
void
wireless_msgs__msg__Network__fini(wireless_msgs__msg__Network * msg);

/// Create msg/Network message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wireless_msgs__msg__Network__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wireless_msgs
wireless_msgs__msg__Network *
wireless_msgs__msg__Network__create();

/// Destroy msg/Network message.
/**
 * It calls
 * wireless_msgs__msg__Network__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wireless_msgs
void
wireless_msgs__msg__Network__destroy(wireless_msgs__msg__Network * msg);

/// Check for msg/Network message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wireless_msgs
bool
wireless_msgs__msg__Network__are_equal(const wireless_msgs__msg__Network * lhs, const wireless_msgs__msg__Network * rhs);

/// Copy a msg/Network message.
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
wireless_msgs__msg__Network__copy(
  const wireless_msgs__msg__Network * input,
  wireless_msgs__msg__Network * output);

/// Initialize array of msg/Network messages.
/**
 * It allocates the memory for the number of elements and calls
 * wireless_msgs__msg__Network__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wireless_msgs
bool
wireless_msgs__msg__Network__Sequence__init(wireless_msgs__msg__Network__Sequence * array, size_t size);

/// Finalize array of msg/Network messages.
/**
 * It calls
 * wireless_msgs__msg__Network__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wireless_msgs
void
wireless_msgs__msg__Network__Sequence__fini(wireless_msgs__msg__Network__Sequence * array);

/// Create array of msg/Network messages.
/**
 * It allocates the memory for the array and calls
 * wireless_msgs__msg__Network__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wireless_msgs
wireless_msgs__msg__Network__Sequence *
wireless_msgs__msg__Network__Sequence__create(size_t size);

/// Destroy array of msg/Network messages.
/**
 * It calls
 * wireless_msgs__msg__Network__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wireless_msgs
void
wireless_msgs__msg__Network__Sequence__destroy(wireless_msgs__msg__Network__Sequence * array);

/// Check for msg/Network message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wireless_msgs
bool
wireless_msgs__msg__Network__Sequence__are_equal(const wireless_msgs__msg__Network__Sequence * lhs, const wireless_msgs__msg__Network__Sequence * rhs);

/// Copy an array of msg/Network messages.
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
wireless_msgs__msg__Network__Sequence__copy(
  const wireless_msgs__msg__Network__Sequence * input,
  wireless_msgs__msg__Network__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WIRELESS_MSGS__MSG__DETAIL__NETWORK__FUNCTIONS_H_
