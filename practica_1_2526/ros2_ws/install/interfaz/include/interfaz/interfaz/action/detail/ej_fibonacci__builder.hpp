// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaz:action/EjFibonacci.idl
// generated code does not contain a copyright notice

#ifndef INTERFAZ__ACTION__DETAIL__EJ_FIBONACCI__BUILDER_HPP_
#define INTERFAZ__ACTION__DETAIL__EJ_FIBONACCI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaz/action/detail/ej_fibonacci__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaz
{

namespace action
{

namespace builder
{

class Init_EjFibonacci_Goal_orden
{
public:
  Init_EjFibonacci_Goal_orden()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaz::action::EjFibonacci_Goal orden(::interfaz::action::EjFibonacci_Goal::_orden_type arg)
  {
    msg_.orden = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaz::action::EjFibonacci_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaz::action::EjFibonacci_Goal>()
{
  return interfaz::action::builder::Init_EjFibonacci_Goal_orden();
}

}  // namespace interfaz


namespace interfaz
{

namespace action
{

namespace builder
{

class Init_EjFibonacci_Result_secuencia_final
{
public:
  Init_EjFibonacci_Result_secuencia_final()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaz::action::EjFibonacci_Result secuencia_final(::interfaz::action::EjFibonacci_Result::_secuencia_final_type arg)
  {
    msg_.secuencia_final = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaz::action::EjFibonacci_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaz::action::EjFibonacci_Result>()
{
  return interfaz::action::builder::Init_EjFibonacci_Result_secuencia_final();
}

}  // namespace interfaz


namespace interfaz
{

namespace action
{

namespace builder
{

class Init_EjFibonacci_Feedback_raiz
{
public:
  Init_EjFibonacci_Feedback_raiz()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaz::action::EjFibonacci_Feedback raiz(::interfaz::action::EjFibonacci_Feedback::_raiz_type arg)
  {
    msg_.raiz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaz::action::EjFibonacci_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaz::action::EjFibonacci_Feedback>()
{
  return interfaz::action::builder::Init_EjFibonacci_Feedback_raiz();
}

}  // namespace interfaz


namespace interfaz
{

namespace action
{

namespace builder
{

class Init_EjFibonacci_SendGoal_Request_goal
{
public:
  explicit Init_EjFibonacci_SendGoal_Request_goal(::interfaz::action::EjFibonacci_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::interfaz::action::EjFibonacci_SendGoal_Request goal(::interfaz::action::EjFibonacci_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaz::action::EjFibonacci_SendGoal_Request msg_;
};

class Init_EjFibonacci_SendGoal_Request_goal_id
{
public:
  Init_EjFibonacci_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EjFibonacci_SendGoal_Request_goal goal_id(::interfaz::action::EjFibonacci_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_EjFibonacci_SendGoal_Request_goal(msg_);
  }

private:
  ::interfaz::action::EjFibonacci_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaz::action::EjFibonacci_SendGoal_Request>()
{
  return interfaz::action::builder::Init_EjFibonacci_SendGoal_Request_goal_id();
}

}  // namespace interfaz


namespace interfaz
{

namespace action
{

namespace builder
{

class Init_EjFibonacci_SendGoal_Response_stamp
{
public:
  explicit Init_EjFibonacci_SendGoal_Response_stamp(::interfaz::action::EjFibonacci_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::interfaz::action::EjFibonacci_SendGoal_Response stamp(::interfaz::action::EjFibonacci_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaz::action::EjFibonacci_SendGoal_Response msg_;
};

class Init_EjFibonacci_SendGoal_Response_accepted
{
public:
  Init_EjFibonacci_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EjFibonacci_SendGoal_Response_stamp accepted(::interfaz::action::EjFibonacci_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_EjFibonacci_SendGoal_Response_stamp(msg_);
  }

private:
  ::interfaz::action::EjFibonacci_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaz::action::EjFibonacci_SendGoal_Response>()
{
  return interfaz::action::builder::Init_EjFibonacci_SendGoal_Response_accepted();
}

}  // namespace interfaz


namespace interfaz
{

namespace action
{

namespace builder
{

class Init_EjFibonacci_GetResult_Request_goal_id
{
public:
  Init_EjFibonacci_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaz::action::EjFibonacci_GetResult_Request goal_id(::interfaz::action::EjFibonacci_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaz::action::EjFibonacci_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaz::action::EjFibonacci_GetResult_Request>()
{
  return interfaz::action::builder::Init_EjFibonacci_GetResult_Request_goal_id();
}

}  // namespace interfaz


namespace interfaz
{

namespace action
{

namespace builder
{

class Init_EjFibonacci_GetResult_Response_result
{
public:
  explicit Init_EjFibonacci_GetResult_Response_result(::interfaz::action::EjFibonacci_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::interfaz::action::EjFibonacci_GetResult_Response result(::interfaz::action::EjFibonacci_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaz::action::EjFibonacci_GetResult_Response msg_;
};

class Init_EjFibonacci_GetResult_Response_status
{
public:
  Init_EjFibonacci_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EjFibonacci_GetResult_Response_result status(::interfaz::action::EjFibonacci_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_EjFibonacci_GetResult_Response_result(msg_);
  }

private:
  ::interfaz::action::EjFibonacci_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaz::action::EjFibonacci_GetResult_Response>()
{
  return interfaz::action::builder::Init_EjFibonacci_GetResult_Response_status();
}

}  // namespace interfaz


namespace interfaz
{

namespace action
{

namespace builder
{

class Init_EjFibonacci_FeedbackMessage_feedback
{
public:
  explicit Init_EjFibonacci_FeedbackMessage_feedback(::interfaz::action::EjFibonacci_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::interfaz::action::EjFibonacci_FeedbackMessage feedback(::interfaz::action::EjFibonacci_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaz::action::EjFibonacci_FeedbackMessage msg_;
};

class Init_EjFibonacci_FeedbackMessage_goal_id
{
public:
  Init_EjFibonacci_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EjFibonacci_FeedbackMessage_feedback goal_id(::interfaz::action::EjFibonacci_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_EjFibonacci_FeedbackMessage_feedback(msg_);
  }

private:
  ::interfaz::action::EjFibonacci_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaz::action::EjFibonacci_FeedbackMessage>()
{
  return interfaz::action::builder::Init_EjFibonacci_FeedbackMessage_goal_id();
}

}  // namespace interfaz

#endif  // INTERFAZ__ACTION__DETAIL__EJ_FIBONACCI__BUILDER_HPP_
