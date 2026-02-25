// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaz:srv/ConvertTemp.idl
// generated code does not contain a copyright notice

#ifndef INTERFAZ__SRV__DETAIL__CONVERT_TEMP__BUILDER_HPP_
#define INTERFAZ__SRV__DETAIL__CONVERT_TEMP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaz/srv/detail/convert_temp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaz
{

namespace srv
{

namespace builder
{

class Init_ConvertTemp_Request_conversion_type
{
public:
  explicit Init_ConvertTemp_Request_conversion_type(::interfaz::srv::ConvertTemp_Request & msg)
  : msg_(msg)
  {}
  ::interfaz::srv::ConvertTemp_Request conversion_type(::interfaz::srv::ConvertTemp_Request::_conversion_type_type arg)
  {
    msg_.conversion_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaz::srv::ConvertTemp_Request msg_;
};

class Init_ConvertTemp_Request_input_temp
{
public:
  Init_ConvertTemp_Request_input_temp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConvertTemp_Request_conversion_type input_temp(::interfaz::srv::ConvertTemp_Request::_input_temp_type arg)
  {
    msg_.input_temp = std::move(arg);
    return Init_ConvertTemp_Request_conversion_type(msg_);
  }

private:
  ::interfaz::srv::ConvertTemp_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaz::srv::ConvertTemp_Request>()
{
  return interfaz::srv::builder::Init_ConvertTemp_Request_input_temp();
}

}  // namespace interfaz


namespace interfaz
{

namespace srv
{

namespace builder
{

class Init_ConvertTemp_Response_converted_temp
{
public:
  Init_ConvertTemp_Response_converted_temp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaz::srv::ConvertTemp_Response converted_temp(::interfaz::srv::ConvertTemp_Response::_converted_temp_type arg)
  {
    msg_.converted_temp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaz::srv::ConvertTemp_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaz::srv::ConvertTemp_Response>()
{
  return interfaz::srv::builder::Init_ConvertTemp_Response_converted_temp();
}

}  // namespace interfaz

#endif  // INTERFAZ__SRV__DETAIL__CONVERT_TEMP__BUILDER_HPP_
