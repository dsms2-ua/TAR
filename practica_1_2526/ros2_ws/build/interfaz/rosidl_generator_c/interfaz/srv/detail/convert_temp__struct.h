// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaz:srv/ConvertTemp.idl
// generated code does not contain a copyright notice

#ifndef INTERFAZ__SRV__DETAIL__CONVERT_TEMP__STRUCT_H_
#define INTERFAZ__SRV__DETAIL__CONVERT_TEMP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'conversion_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ConvertTemp in the package interfaz.
typedef struct interfaz__srv__ConvertTemp_Request
{
  double input_temp;
  /// Cel_to_Far o Far_to_Cel
  rosidl_runtime_c__String conversion_type;
} interfaz__srv__ConvertTemp_Request;

// Struct for a sequence of interfaz__srv__ConvertTemp_Request.
typedef struct interfaz__srv__ConvertTemp_Request__Sequence
{
  interfaz__srv__ConvertTemp_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaz__srv__ConvertTemp_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ConvertTemp in the package interfaz.
typedef struct interfaz__srv__ConvertTemp_Response
{
  double converted_temp;
} interfaz__srv__ConvertTemp_Response;

// Struct for a sequence of interfaz__srv__ConvertTemp_Response.
typedef struct interfaz__srv__ConvertTemp_Response__Sequence
{
  interfaz__srv__ConvertTemp_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaz__srv__ConvertTemp_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFAZ__SRV__DETAIL__CONVERT_TEMP__STRUCT_H_
