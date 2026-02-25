// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaz:srv/ConvertTemp.idl
// generated code does not contain a copyright notice

#ifndef INTERFAZ__SRV__DETAIL__CONVERT_TEMP__STRUCT_HPP_
#define INTERFAZ__SRV__DETAIL__CONVERT_TEMP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaz__srv__ConvertTemp_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaz__srv__ConvertTemp_Request __declspec(deprecated)
#endif

namespace interfaz
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConvertTemp_Request_
{
  using Type = ConvertTemp_Request_<ContainerAllocator>;

  explicit ConvertTemp_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input_temp = 0.0;
      this->conversion_type = "";
    }
  }

  explicit ConvertTemp_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : conversion_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input_temp = 0.0;
      this->conversion_type = "";
    }
  }

  // field types and members
  using _input_temp_type =
    double;
  _input_temp_type input_temp;
  using _conversion_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _conversion_type_type conversion_type;

  // setters for named parameter idiom
  Type & set__input_temp(
    const double & _arg)
  {
    this->input_temp = _arg;
    return *this;
  }
  Type & set__conversion_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->conversion_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaz::srv::ConvertTemp_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaz::srv::ConvertTemp_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaz::srv::ConvertTemp_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaz::srv::ConvertTemp_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaz::srv::ConvertTemp_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaz::srv::ConvertTemp_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaz::srv::ConvertTemp_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaz::srv::ConvertTemp_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaz::srv::ConvertTemp_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaz::srv::ConvertTemp_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaz__srv__ConvertTemp_Request
    std::shared_ptr<interfaz::srv::ConvertTemp_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaz__srv__ConvertTemp_Request
    std::shared_ptr<interfaz::srv::ConvertTemp_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConvertTemp_Request_ & other) const
  {
    if (this->input_temp != other.input_temp) {
      return false;
    }
    if (this->conversion_type != other.conversion_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConvertTemp_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConvertTemp_Request_

// alias to use template instance with default allocator
using ConvertTemp_Request =
  interfaz::srv::ConvertTemp_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaz


#ifndef _WIN32
# define DEPRECATED__interfaz__srv__ConvertTemp_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaz__srv__ConvertTemp_Response __declspec(deprecated)
#endif

namespace interfaz
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConvertTemp_Response_
{
  using Type = ConvertTemp_Response_<ContainerAllocator>;

  explicit ConvertTemp_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->converted_temp = 0.0;
    }
  }

  explicit ConvertTemp_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->converted_temp = 0.0;
    }
  }

  // field types and members
  using _converted_temp_type =
    double;
  _converted_temp_type converted_temp;

  // setters for named parameter idiom
  Type & set__converted_temp(
    const double & _arg)
  {
    this->converted_temp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaz::srv::ConvertTemp_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaz::srv::ConvertTemp_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaz::srv::ConvertTemp_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaz::srv::ConvertTemp_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaz::srv::ConvertTemp_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaz::srv::ConvertTemp_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaz::srv::ConvertTemp_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaz::srv::ConvertTemp_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaz::srv::ConvertTemp_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaz::srv::ConvertTemp_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaz__srv__ConvertTemp_Response
    std::shared_ptr<interfaz::srv::ConvertTemp_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaz__srv__ConvertTemp_Response
    std::shared_ptr<interfaz::srv::ConvertTemp_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConvertTemp_Response_ & other) const
  {
    if (this->converted_temp != other.converted_temp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConvertTemp_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConvertTemp_Response_

// alias to use template instance with default allocator
using ConvertTemp_Response =
  interfaz::srv::ConvertTemp_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaz

namespace interfaz
{

namespace srv
{

struct ConvertTemp
{
  using Request = interfaz::srv::ConvertTemp_Request;
  using Response = interfaz::srv::ConvertTemp_Response;
};

}  // namespace srv

}  // namespace interfaz

#endif  // INTERFAZ__SRV__DETAIL__CONVERT_TEMP__STRUCT_HPP_
