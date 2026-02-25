// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaz:action/EjFibonacci.idl
// generated code does not contain a copyright notice

#ifndef INTERFAZ__ACTION__DETAIL__EJ_FIBONACCI__TRAITS_HPP_
#define INTERFAZ__ACTION__DETAIL__EJ_FIBONACCI__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaz/action/detail/ej_fibonacci__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaz
{

namespace action
{

inline void to_flow_style_yaml(
  const EjFibonacci_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: orden
  {
    out << "orden: ";
    rosidl_generator_traits::value_to_yaml(msg.orden, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EjFibonacci_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: orden
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orden: ";
    rosidl_generator_traits::value_to_yaml(msg.orden, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EjFibonacci_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interfaz

namespace rosidl_generator_traits
{

[[deprecated("use interfaz::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaz::action::EjFibonacci_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaz::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaz::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaz::action::EjFibonacci_Goal & msg)
{
  return interfaz::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaz::action::EjFibonacci_Goal>()
{
  return "interfaz::action::EjFibonacci_Goal";
}

template<>
inline const char * name<interfaz::action::EjFibonacci_Goal>()
{
  return "interfaz/action/EjFibonacci_Goal";
}

template<>
struct has_fixed_size<interfaz::action::EjFibonacci_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaz::action::EjFibonacci_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaz::action::EjFibonacci_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interfaz
{

namespace action
{

inline void to_flow_style_yaml(
  const EjFibonacci_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: secuencia_final
  {
    if (msg.secuencia_final.size() == 0) {
      out << "secuencia_final: []";
    } else {
      out << "secuencia_final: [";
      size_t pending_items = msg.secuencia_final.size();
      for (auto item : msg.secuencia_final) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EjFibonacci_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: secuencia_final
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.secuencia_final.size() == 0) {
      out << "secuencia_final: []\n";
    } else {
      out << "secuencia_final:\n";
      for (auto item : msg.secuencia_final) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EjFibonacci_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interfaz

namespace rosidl_generator_traits
{

[[deprecated("use interfaz::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaz::action::EjFibonacci_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaz::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaz::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaz::action::EjFibonacci_Result & msg)
{
  return interfaz::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaz::action::EjFibonacci_Result>()
{
  return "interfaz::action::EjFibonacci_Result";
}

template<>
inline const char * name<interfaz::action::EjFibonacci_Result>()
{
  return "interfaz/action/EjFibonacci_Result";
}

template<>
struct has_fixed_size<interfaz::action::EjFibonacci_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaz::action::EjFibonacci_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaz::action::EjFibonacci_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interfaz
{

namespace action
{

inline void to_flow_style_yaml(
  const EjFibonacci_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: raiz
  {
    out << "raiz: ";
    rosidl_generator_traits::value_to_yaml(msg.raiz, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EjFibonacci_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: raiz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "raiz: ";
    rosidl_generator_traits::value_to_yaml(msg.raiz, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EjFibonacci_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interfaz

namespace rosidl_generator_traits
{

[[deprecated("use interfaz::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaz::action::EjFibonacci_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaz::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaz::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaz::action::EjFibonacci_Feedback & msg)
{
  return interfaz::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaz::action::EjFibonacci_Feedback>()
{
  return "interfaz::action::EjFibonacci_Feedback";
}

template<>
inline const char * name<interfaz::action::EjFibonacci_Feedback>()
{
  return "interfaz/action/EjFibonacci_Feedback";
}

template<>
struct has_fixed_size<interfaz::action::EjFibonacci_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaz::action::EjFibonacci_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaz::action::EjFibonacci_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "interfaz/action/detail/ej_fibonacci__traits.hpp"

namespace interfaz
{

namespace action
{

inline void to_flow_style_yaml(
  const EjFibonacci_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EjFibonacci_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EjFibonacci_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interfaz

namespace rosidl_generator_traits
{

[[deprecated("use interfaz::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaz::action::EjFibonacci_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaz::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaz::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaz::action::EjFibonacci_SendGoal_Request & msg)
{
  return interfaz::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaz::action::EjFibonacci_SendGoal_Request>()
{
  return "interfaz::action::EjFibonacci_SendGoal_Request";
}

template<>
inline const char * name<interfaz::action::EjFibonacci_SendGoal_Request>()
{
  return "interfaz/action/EjFibonacci_SendGoal_Request";
}

template<>
struct has_fixed_size<interfaz::action::EjFibonacci_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<interfaz::action::EjFibonacci_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<interfaz::action::EjFibonacci_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<interfaz::action::EjFibonacci_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<interfaz::action::EjFibonacci_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace interfaz
{

namespace action
{

inline void to_flow_style_yaml(
  const EjFibonacci_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EjFibonacci_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EjFibonacci_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interfaz

namespace rosidl_generator_traits
{

[[deprecated("use interfaz::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaz::action::EjFibonacci_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaz::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaz::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaz::action::EjFibonacci_SendGoal_Response & msg)
{
  return interfaz::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaz::action::EjFibonacci_SendGoal_Response>()
{
  return "interfaz::action::EjFibonacci_SendGoal_Response";
}

template<>
inline const char * name<interfaz::action::EjFibonacci_SendGoal_Response>()
{
  return "interfaz/action/EjFibonacci_SendGoal_Response";
}

template<>
struct has_fixed_size<interfaz::action::EjFibonacci_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<interfaz::action::EjFibonacci_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<interfaz::action::EjFibonacci_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaz::action::EjFibonacci_SendGoal>()
{
  return "interfaz::action::EjFibonacci_SendGoal";
}

template<>
inline const char * name<interfaz::action::EjFibonacci_SendGoal>()
{
  return "interfaz/action/EjFibonacci_SendGoal";
}

template<>
struct has_fixed_size<interfaz::action::EjFibonacci_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaz::action::EjFibonacci_SendGoal_Request>::value &&
    has_fixed_size<interfaz::action::EjFibonacci_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaz::action::EjFibonacci_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaz::action::EjFibonacci_SendGoal_Request>::value &&
    has_bounded_size<interfaz::action::EjFibonacci_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<interfaz::action::EjFibonacci_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<interfaz::action::EjFibonacci_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaz::action::EjFibonacci_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace interfaz
{

namespace action
{

inline void to_flow_style_yaml(
  const EjFibonacci_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EjFibonacci_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EjFibonacci_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interfaz

namespace rosidl_generator_traits
{

[[deprecated("use interfaz::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaz::action::EjFibonacci_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaz::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaz::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaz::action::EjFibonacci_GetResult_Request & msg)
{
  return interfaz::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaz::action::EjFibonacci_GetResult_Request>()
{
  return "interfaz::action::EjFibonacci_GetResult_Request";
}

template<>
inline const char * name<interfaz::action::EjFibonacci_GetResult_Request>()
{
  return "interfaz/action/EjFibonacci_GetResult_Request";
}

template<>
struct has_fixed_size<interfaz::action::EjFibonacci_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<interfaz::action::EjFibonacci_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<interfaz::action::EjFibonacci_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "interfaz/action/detail/ej_fibonacci__traits.hpp"

namespace interfaz
{

namespace action
{

inline void to_flow_style_yaml(
  const EjFibonacci_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EjFibonacci_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EjFibonacci_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interfaz

namespace rosidl_generator_traits
{

[[deprecated("use interfaz::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaz::action::EjFibonacci_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaz::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaz::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaz::action::EjFibonacci_GetResult_Response & msg)
{
  return interfaz::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaz::action::EjFibonacci_GetResult_Response>()
{
  return "interfaz::action::EjFibonacci_GetResult_Response";
}

template<>
inline const char * name<interfaz::action::EjFibonacci_GetResult_Response>()
{
  return "interfaz/action/EjFibonacci_GetResult_Response";
}

template<>
struct has_fixed_size<interfaz::action::EjFibonacci_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<interfaz::action::EjFibonacci_Result>::value> {};

template<>
struct has_bounded_size<interfaz::action::EjFibonacci_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<interfaz::action::EjFibonacci_Result>::value> {};

template<>
struct is_message<interfaz::action::EjFibonacci_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaz::action::EjFibonacci_GetResult>()
{
  return "interfaz::action::EjFibonacci_GetResult";
}

template<>
inline const char * name<interfaz::action::EjFibonacci_GetResult>()
{
  return "interfaz/action/EjFibonacci_GetResult";
}

template<>
struct has_fixed_size<interfaz::action::EjFibonacci_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaz::action::EjFibonacci_GetResult_Request>::value &&
    has_fixed_size<interfaz::action::EjFibonacci_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaz::action::EjFibonacci_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaz::action::EjFibonacci_GetResult_Request>::value &&
    has_bounded_size<interfaz::action::EjFibonacci_GetResult_Response>::value
  >
{
};

template<>
struct is_service<interfaz::action::EjFibonacci_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<interfaz::action::EjFibonacci_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaz::action::EjFibonacci_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "interfaz/action/detail/ej_fibonacci__traits.hpp"

namespace interfaz
{

namespace action
{

inline void to_flow_style_yaml(
  const EjFibonacci_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EjFibonacci_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EjFibonacci_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace interfaz

namespace rosidl_generator_traits
{

[[deprecated("use interfaz::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaz::action::EjFibonacci_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaz::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaz::action::to_yaml() instead")]]
inline std::string to_yaml(const interfaz::action::EjFibonacci_FeedbackMessage & msg)
{
  return interfaz::action::to_yaml(msg);
}

template<>
inline const char * data_type<interfaz::action::EjFibonacci_FeedbackMessage>()
{
  return "interfaz::action::EjFibonacci_FeedbackMessage";
}

template<>
inline const char * name<interfaz::action::EjFibonacci_FeedbackMessage>()
{
  return "interfaz/action/EjFibonacci_FeedbackMessage";
}

template<>
struct has_fixed_size<interfaz::action::EjFibonacci_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<interfaz::action::EjFibonacci_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<interfaz::action::EjFibonacci_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<interfaz::action::EjFibonacci_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<interfaz::action::EjFibonacci_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<interfaz::action::EjFibonacci>
  : std::true_type
{
};

template<>
struct is_action_goal<interfaz::action::EjFibonacci_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<interfaz::action::EjFibonacci_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<interfaz::action::EjFibonacci_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // INTERFAZ__ACTION__DETAIL__EJ_FIBONACCI__TRAITS_HPP_
