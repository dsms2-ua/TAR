// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from interfaz:srv/ConvertTemp.idl
// generated code does not contain a copyright notice

#ifndef INTERFAZ__SRV__DETAIL__CONVERT_TEMP__FUNCTIONS_H_
#define INTERFAZ__SRV__DETAIL__CONVERT_TEMP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "interfaz/msg/rosidl_generator_c__visibility_control.h"

#include "interfaz/srv/detail/convert_temp__struct.h"

/// Initialize srv/ConvertTemp message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * interfaz__srv__ConvertTemp_Request
 * )) before or use
 * interfaz__srv__ConvertTemp_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
bool
interfaz__srv__ConvertTemp_Request__init(interfaz__srv__ConvertTemp_Request * msg);

/// Finalize srv/ConvertTemp message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
void
interfaz__srv__ConvertTemp_Request__fini(interfaz__srv__ConvertTemp_Request * msg);

/// Create srv/ConvertTemp message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * interfaz__srv__ConvertTemp_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
interfaz__srv__ConvertTemp_Request *
interfaz__srv__ConvertTemp_Request__create();

/// Destroy srv/ConvertTemp message.
/**
 * It calls
 * interfaz__srv__ConvertTemp_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
void
interfaz__srv__ConvertTemp_Request__destroy(interfaz__srv__ConvertTemp_Request * msg);

/// Check for srv/ConvertTemp message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
bool
interfaz__srv__ConvertTemp_Request__are_equal(const interfaz__srv__ConvertTemp_Request * lhs, const interfaz__srv__ConvertTemp_Request * rhs);

/// Copy a srv/ConvertTemp message.
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
ROSIDL_GENERATOR_C_PUBLIC_interfaz
bool
interfaz__srv__ConvertTemp_Request__copy(
  const interfaz__srv__ConvertTemp_Request * input,
  interfaz__srv__ConvertTemp_Request * output);

/// Initialize array of srv/ConvertTemp messages.
/**
 * It allocates the memory for the number of elements and calls
 * interfaz__srv__ConvertTemp_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
bool
interfaz__srv__ConvertTemp_Request__Sequence__init(interfaz__srv__ConvertTemp_Request__Sequence * array, size_t size);

/// Finalize array of srv/ConvertTemp messages.
/**
 * It calls
 * interfaz__srv__ConvertTemp_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
void
interfaz__srv__ConvertTemp_Request__Sequence__fini(interfaz__srv__ConvertTemp_Request__Sequence * array);

/// Create array of srv/ConvertTemp messages.
/**
 * It allocates the memory for the array and calls
 * interfaz__srv__ConvertTemp_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
interfaz__srv__ConvertTemp_Request__Sequence *
interfaz__srv__ConvertTemp_Request__Sequence__create(size_t size);

/// Destroy array of srv/ConvertTemp messages.
/**
 * It calls
 * interfaz__srv__ConvertTemp_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
void
interfaz__srv__ConvertTemp_Request__Sequence__destroy(interfaz__srv__ConvertTemp_Request__Sequence * array);

/// Check for srv/ConvertTemp message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
bool
interfaz__srv__ConvertTemp_Request__Sequence__are_equal(const interfaz__srv__ConvertTemp_Request__Sequence * lhs, const interfaz__srv__ConvertTemp_Request__Sequence * rhs);

/// Copy an array of srv/ConvertTemp messages.
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
ROSIDL_GENERATOR_C_PUBLIC_interfaz
bool
interfaz__srv__ConvertTemp_Request__Sequence__copy(
  const interfaz__srv__ConvertTemp_Request__Sequence * input,
  interfaz__srv__ConvertTemp_Request__Sequence * output);

/// Initialize srv/ConvertTemp message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * interfaz__srv__ConvertTemp_Response
 * )) before or use
 * interfaz__srv__ConvertTemp_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
bool
interfaz__srv__ConvertTemp_Response__init(interfaz__srv__ConvertTemp_Response * msg);

/// Finalize srv/ConvertTemp message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
void
interfaz__srv__ConvertTemp_Response__fini(interfaz__srv__ConvertTemp_Response * msg);

/// Create srv/ConvertTemp message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * interfaz__srv__ConvertTemp_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
interfaz__srv__ConvertTemp_Response *
interfaz__srv__ConvertTemp_Response__create();

/// Destroy srv/ConvertTemp message.
/**
 * It calls
 * interfaz__srv__ConvertTemp_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
void
interfaz__srv__ConvertTemp_Response__destroy(interfaz__srv__ConvertTemp_Response * msg);

/// Check for srv/ConvertTemp message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
bool
interfaz__srv__ConvertTemp_Response__are_equal(const interfaz__srv__ConvertTemp_Response * lhs, const interfaz__srv__ConvertTemp_Response * rhs);

/// Copy a srv/ConvertTemp message.
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
ROSIDL_GENERATOR_C_PUBLIC_interfaz
bool
interfaz__srv__ConvertTemp_Response__copy(
  const interfaz__srv__ConvertTemp_Response * input,
  interfaz__srv__ConvertTemp_Response * output);

/// Initialize array of srv/ConvertTemp messages.
/**
 * It allocates the memory for the number of elements and calls
 * interfaz__srv__ConvertTemp_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
bool
interfaz__srv__ConvertTemp_Response__Sequence__init(interfaz__srv__ConvertTemp_Response__Sequence * array, size_t size);

/// Finalize array of srv/ConvertTemp messages.
/**
 * It calls
 * interfaz__srv__ConvertTemp_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
void
interfaz__srv__ConvertTemp_Response__Sequence__fini(interfaz__srv__ConvertTemp_Response__Sequence * array);

/// Create array of srv/ConvertTemp messages.
/**
 * It allocates the memory for the array and calls
 * interfaz__srv__ConvertTemp_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
interfaz__srv__ConvertTemp_Response__Sequence *
interfaz__srv__ConvertTemp_Response__Sequence__create(size_t size);

/// Destroy array of srv/ConvertTemp messages.
/**
 * It calls
 * interfaz__srv__ConvertTemp_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
void
interfaz__srv__ConvertTemp_Response__Sequence__destroy(interfaz__srv__ConvertTemp_Response__Sequence * array);

/// Check for srv/ConvertTemp message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
bool
interfaz__srv__ConvertTemp_Response__Sequence__are_equal(const interfaz__srv__ConvertTemp_Response__Sequence * lhs, const interfaz__srv__ConvertTemp_Response__Sequence * rhs);

/// Copy an array of srv/ConvertTemp messages.
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
ROSIDL_GENERATOR_C_PUBLIC_interfaz
bool
interfaz__srv__ConvertTemp_Response__Sequence__copy(
  const interfaz__srv__ConvertTemp_Response__Sequence * input,
  interfaz__srv__ConvertTemp_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // INTERFAZ__SRV__DETAIL__CONVERT_TEMP__FUNCTIONS_H_
