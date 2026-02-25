// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaz:action/Battery.idl
// generated code does not contain a copyright notice

#ifndef INTERFAZ__ACTION__DETAIL__BATTERY__STRUCT_H_
#define INTERFAZ__ACTION__DETAIL__BATTERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Battery in the package interfaz.
typedef struct interfaz__action__Battery_Goal
{
  int32_t target_percentage;
} interfaz__action__Battery_Goal;

// Struct for a sequence of interfaz__action__Battery_Goal.
typedef struct interfaz__action__Battery_Goal__Sequence
{
  interfaz__action__Battery_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaz__action__Battery_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'warning'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Battery in the package interfaz.
typedef struct interfaz__action__Battery_Result
{
  rosidl_runtime_c__String warning;
} interfaz__action__Battery_Result;

// Struct for a sequence of interfaz__action__Battery_Result.
typedef struct interfaz__action__Battery_Result__Sequence
{
  interfaz__action__Battery_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaz__action__Battery_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Battery in the package interfaz.
typedef struct interfaz__action__Battery_Feedback
{
  int32_t current_percentage;
} interfaz__action__Battery_Feedback;

// Struct for a sequence of interfaz__action__Battery_Feedback.
typedef struct interfaz__action__Battery_Feedback__Sequence
{
  interfaz__action__Battery_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaz__action__Battery_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "interfaz/action/detail/battery__struct.h"

/// Struct defined in action/Battery in the package interfaz.
typedef struct interfaz__action__Battery_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  interfaz__action__Battery_Goal goal;
} interfaz__action__Battery_SendGoal_Request;

// Struct for a sequence of interfaz__action__Battery_SendGoal_Request.
typedef struct interfaz__action__Battery_SendGoal_Request__Sequence
{
  interfaz__action__Battery_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaz__action__Battery_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Battery in the package interfaz.
typedef struct interfaz__action__Battery_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} interfaz__action__Battery_SendGoal_Response;

// Struct for a sequence of interfaz__action__Battery_SendGoal_Response.
typedef struct interfaz__action__Battery_SendGoal_Response__Sequence
{
  interfaz__action__Battery_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaz__action__Battery_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Battery in the package interfaz.
typedef struct interfaz__action__Battery_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} interfaz__action__Battery_GetResult_Request;

// Struct for a sequence of interfaz__action__Battery_GetResult_Request.
typedef struct interfaz__action__Battery_GetResult_Request__Sequence
{
  interfaz__action__Battery_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaz__action__Battery_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "interfaz/action/detail/battery__struct.h"

/// Struct defined in action/Battery in the package interfaz.
typedef struct interfaz__action__Battery_GetResult_Response
{
  int8_t status;
  interfaz__action__Battery_Result result;
} interfaz__action__Battery_GetResult_Response;

// Struct for a sequence of interfaz__action__Battery_GetResult_Response.
typedef struct interfaz__action__Battery_GetResult_Response__Sequence
{
  interfaz__action__Battery_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaz__action__Battery_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "interfaz/action/detail/battery__struct.h"

/// Struct defined in action/Battery in the package interfaz.
typedef struct interfaz__action__Battery_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  interfaz__action__Battery_Feedback feedback;
} interfaz__action__Battery_FeedbackMessage;

// Struct for a sequence of interfaz__action__Battery_FeedbackMessage.
typedef struct interfaz__action__Battery_FeedbackMessage__Sequence
{
  interfaz__action__Battery_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaz__action__Battery_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFAZ__ACTION__DETAIL__BATTERY__STRUCT_H_
