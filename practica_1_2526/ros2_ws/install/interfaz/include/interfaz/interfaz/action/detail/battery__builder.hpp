// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaz:action/Battery.idl
// generated code does not contain a copyright notice

#ifndef INTERFAZ__ACTION__DETAIL__BATTERY__BUILDER_HPP_
#define INTERFAZ__ACTION__DETAIL__BATTERY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaz/action/detail/battery__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaz
{

namespace action
{

namespace builder
{

class Init_Battery_Goal_target_percentage
{
public:
  Init_Battery_Goal_target_percentage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaz::action::Battery_Goal target_percentage(::interfaz::action::Battery_Goal::_target_percentage_type arg)
  {
    msg_.target_percentage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaz::action::Battery_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaz::action::Battery_Goal>()
{
  return interfaz::action::builder::Init_Battery_Goal_target_percentage();
}

}  // namespace interfaz


namespace interfaz
{

namespace action
{

namespace builder
{

class Init_Battery_Result_warning
{
public:
  Init_Battery_Result_warning()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaz::action::Battery_Result warning(::interfaz::action::Battery_Result::_warning_type arg)
  {
    msg_.warning = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaz::action::Battery_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaz::action::Battery_Result>()
{
  return interfaz::action::builder::Init_Battery_Result_warning();
}

}  // namespace interfaz


namespace interfaz
{

namespace action
{

namespace builder
{

class Init_Battery_Feedback_current_percentage
{
public:
  Init_Battery_Feedback_current_percentage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaz::action::Battery_Feedback current_percentage(::interfaz::action::Battery_Feedback::_current_percentage_type arg)
  {
    msg_.current_percentage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaz::action::Battery_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaz::action::Battery_Feedback>()
{
  return interfaz::action::builder::Init_Battery_Feedback_current_percentage();
}

}  // namespace interfaz


namespace interfaz
{

namespace action
{

namespace builder
{

class Init_Battery_SendGoal_Request_goal
{
public:
  explicit Init_Battery_SendGoal_Request_goal(::interfaz::action::Battery_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::interfaz::action::Battery_SendGoal_Request goal(::interfaz::action::Battery_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaz::action::Battery_SendGoal_Request msg_;
};

class Init_Battery_SendGoal_Request_goal_id
{
public:
  Init_Battery_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Battery_SendGoal_Request_goal goal_id(::interfaz::action::Battery_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Battery_SendGoal_Request_goal(msg_);
  }

private:
  ::interfaz::action::Battery_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaz::action::Battery_SendGoal_Request>()
{
  return interfaz::action::builder::Init_Battery_SendGoal_Request_goal_id();
}

}  // namespace interfaz


namespace interfaz
{

namespace action
{

namespace builder
{

class Init_Battery_SendGoal_Response_stamp
{
public:
  explicit Init_Battery_SendGoal_Response_stamp(::interfaz::action::Battery_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::interfaz::action::Battery_SendGoal_Response stamp(::interfaz::action::Battery_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaz::action::Battery_SendGoal_Response msg_;
};

class Init_Battery_SendGoal_Response_accepted
{
public:
  Init_Battery_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Battery_SendGoal_Response_stamp accepted(::interfaz::action::Battery_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Battery_SendGoal_Response_stamp(msg_);
  }

private:
  ::interfaz::action::Battery_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaz::action::Battery_SendGoal_Response>()
{
  return interfaz::action::builder::Init_Battery_SendGoal_Response_accepted();
}

}  // namespace interfaz


namespace interfaz
{

namespace action
{

namespace builder
{

class Init_Battery_GetResult_Request_goal_id
{
public:
  Init_Battery_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaz::action::Battery_GetResult_Request goal_id(::interfaz::action::Battery_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaz::action::Battery_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaz::action::Battery_GetResult_Request>()
{
  return interfaz::action::builder::Init_Battery_GetResult_Request_goal_id();
}

}  // namespace interfaz


namespace interfaz
{

namespace action
{

namespace builder
{

class Init_Battery_GetResult_Response_result
{
public:
  explicit Init_Battery_GetResult_Response_result(::interfaz::action::Battery_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::interfaz::action::Battery_GetResult_Response result(::interfaz::action::Battery_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaz::action::Battery_GetResult_Response msg_;
};

class Init_Battery_GetResult_Response_status
{
public:
  Init_Battery_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Battery_GetResult_Response_result status(::interfaz::action::Battery_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Battery_GetResult_Response_result(msg_);
  }

private:
  ::interfaz::action::Battery_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaz::action::Battery_GetResult_Response>()
{
  return interfaz::action::builder::Init_Battery_GetResult_Response_status();
}

}  // namespace interfaz


namespace interfaz
{

namespace action
{

namespace builder
{

class Init_Battery_FeedbackMessage_feedback
{
public:
  explicit Init_Battery_FeedbackMessage_feedback(::interfaz::action::Battery_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::interfaz::action::Battery_FeedbackMessage feedback(::interfaz::action::Battery_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaz::action::Battery_FeedbackMessage msg_;
};

class Init_Battery_FeedbackMessage_goal_id
{
public:
  Init_Battery_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Battery_FeedbackMessage_feedback goal_id(::interfaz::action::Battery_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Battery_FeedbackMessage_feedback(msg_);
  }

private:
  ::interfaz::action::Battery_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaz::action::Battery_FeedbackMessage>()
{
  return interfaz::action::builder::Init_Battery_FeedbackMessage_goal_id();
}

}  // namespace interfaz

#endif  // INTERFAZ__ACTION__DETAIL__BATTERY__BUILDER_HPP_
