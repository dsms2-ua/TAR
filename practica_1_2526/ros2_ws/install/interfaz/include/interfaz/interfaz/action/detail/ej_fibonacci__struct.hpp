// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaz:action/EjFibonacci.idl
// generated code does not contain a copyright notice

#ifndef INTERFAZ__ACTION__DETAIL__EJ_FIBONACCI__STRUCT_HPP_
#define INTERFAZ__ACTION__DETAIL__EJ_FIBONACCI__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaz__action__EjFibonacci_Goal __attribute__((deprecated))
#else
# define DEPRECATED__interfaz__action__EjFibonacci_Goal __declspec(deprecated)
#endif

namespace interfaz
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct EjFibonacci_Goal_
{
  using Type = EjFibonacci_Goal_<ContainerAllocator>;

  explicit EjFibonacci_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->orden = 0l;
    }
  }

  explicit EjFibonacci_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->orden = 0l;
    }
  }

  // field types and members
  using _orden_type =
    int32_t;
  _orden_type orden;

  // setters for named parameter idiom
  Type & set__orden(
    const int32_t & _arg)
  {
    this->orden = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaz::action::EjFibonacci_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaz::action::EjFibonacci_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaz::action::EjFibonacci_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaz::action::EjFibonacci_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaz::action::EjFibonacci_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaz::action::EjFibonacci_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaz::action::EjFibonacci_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaz::action::EjFibonacci_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaz::action::EjFibonacci_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaz::action::EjFibonacci_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaz__action__EjFibonacci_Goal
    std::shared_ptr<interfaz::action::EjFibonacci_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaz__action__EjFibonacci_Goal
    std::shared_ptr<interfaz::action::EjFibonacci_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EjFibonacci_Goal_ & other) const
  {
    if (this->orden != other.orden) {
      return false;
    }
    return true;
  }
  bool operator!=(const EjFibonacci_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EjFibonacci_Goal_

// alias to use template instance with default allocator
using EjFibonacci_Goal =
  interfaz::action::EjFibonacci_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaz


#ifndef _WIN32
# define DEPRECATED__interfaz__action__EjFibonacci_Result __attribute__((deprecated))
#else
# define DEPRECATED__interfaz__action__EjFibonacci_Result __declspec(deprecated)
#endif

namespace interfaz
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct EjFibonacci_Result_
{
  using Type = EjFibonacci_Result_<ContainerAllocator>;

  explicit EjFibonacci_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit EjFibonacci_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _secuencia_final_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _secuencia_final_type secuencia_final;

  // setters for named parameter idiom
  Type & set__secuencia_final(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->secuencia_final = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaz::action::EjFibonacci_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaz::action::EjFibonacci_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaz::action::EjFibonacci_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaz::action::EjFibonacci_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaz::action::EjFibonacci_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaz::action::EjFibonacci_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaz::action::EjFibonacci_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaz::action::EjFibonacci_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaz::action::EjFibonacci_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaz::action::EjFibonacci_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaz__action__EjFibonacci_Result
    std::shared_ptr<interfaz::action::EjFibonacci_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaz__action__EjFibonacci_Result
    std::shared_ptr<interfaz::action::EjFibonacci_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EjFibonacci_Result_ & other) const
  {
    if (this->secuencia_final != other.secuencia_final) {
      return false;
    }
    return true;
  }
  bool operator!=(const EjFibonacci_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EjFibonacci_Result_

// alias to use template instance with default allocator
using EjFibonacci_Result =
  interfaz::action::EjFibonacci_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaz


#ifndef _WIN32
# define DEPRECATED__interfaz__action__EjFibonacci_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__interfaz__action__EjFibonacci_Feedback __declspec(deprecated)
#endif

namespace interfaz
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct EjFibonacci_Feedback_
{
  using Type = EjFibonacci_Feedback_<ContainerAllocator>;

  explicit EjFibonacci_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->raiz = 0.0;
    }
  }

  explicit EjFibonacci_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->raiz = 0.0;
    }
  }

  // field types and members
  using _raiz_type =
    double;
  _raiz_type raiz;

  // setters for named parameter idiom
  Type & set__raiz(
    const double & _arg)
  {
    this->raiz = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaz::action::EjFibonacci_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaz::action::EjFibonacci_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaz::action::EjFibonacci_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaz::action::EjFibonacci_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaz::action::EjFibonacci_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaz::action::EjFibonacci_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaz::action::EjFibonacci_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaz::action::EjFibonacci_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaz::action::EjFibonacci_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaz::action::EjFibonacci_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaz__action__EjFibonacci_Feedback
    std::shared_ptr<interfaz::action::EjFibonacci_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaz__action__EjFibonacci_Feedback
    std::shared_ptr<interfaz::action::EjFibonacci_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EjFibonacci_Feedback_ & other) const
  {
    if (this->raiz != other.raiz) {
      return false;
    }
    return true;
  }
  bool operator!=(const EjFibonacci_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EjFibonacci_Feedback_

// alias to use template instance with default allocator
using EjFibonacci_Feedback =
  interfaz::action::EjFibonacci_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaz


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "interfaz/action/detail/ej_fibonacci__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaz__action__EjFibonacci_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaz__action__EjFibonacci_SendGoal_Request __declspec(deprecated)
#endif

namespace interfaz
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct EjFibonacci_SendGoal_Request_
{
  using Type = EjFibonacci_SendGoal_Request_<ContainerAllocator>;

  explicit EjFibonacci_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit EjFibonacci_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    interfaz::action::EjFibonacci_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const interfaz::action::EjFibonacci_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaz::action::EjFibonacci_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaz::action::EjFibonacci_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaz::action::EjFibonacci_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaz::action::EjFibonacci_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaz::action::EjFibonacci_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaz::action::EjFibonacci_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaz::action::EjFibonacci_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaz::action::EjFibonacci_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaz::action::EjFibonacci_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaz::action::EjFibonacci_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaz__action__EjFibonacci_SendGoal_Request
    std::shared_ptr<interfaz::action::EjFibonacci_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaz__action__EjFibonacci_SendGoal_Request
    std::shared_ptr<interfaz::action::EjFibonacci_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EjFibonacci_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const EjFibonacci_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EjFibonacci_SendGoal_Request_

// alias to use template instance with default allocator
using EjFibonacci_SendGoal_Request =
  interfaz::action::EjFibonacci_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaz


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaz__action__EjFibonacci_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaz__action__EjFibonacci_SendGoal_Response __declspec(deprecated)
#endif

namespace interfaz
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct EjFibonacci_SendGoal_Response_
{
  using Type = EjFibonacci_SendGoal_Response_<ContainerAllocator>;

  explicit EjFibonacci_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit EjFibonacci_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaz::action::EjFibonacci_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaz::action::EjFibonacci_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaz::action::EjFibonacci_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaz::action::EjFibonacci_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaz::action::EjFibonacci_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaz::action::EjFibonacci_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaz::action::EjFibonacci_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaz::action::EjFibonacci_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaz::action::EjFibonacci_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaz::action::EjFibonacci_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaz__action__EjFibonacci_SendGoal_Response
    std::shared_ptr<interfaz::action::EjFibonacci_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaz__action__EjFibonacci_SendGoal_Response
    std::shared_ptr<interfaz::action::EjFibonacci_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EjFibonacci_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const EjFibonacci_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EjFibonacci_SendGoal_Response_

// alias to use template instance with default allocator
using EjFibonacci_SendGoal_Response =
  interfaz::action::EjFibonacci_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaz

namespace interfaz
{

namespace action
{

struct EjFibonacci_SendGoal
{
  using Request = interfaz::action::EjFibonacci_SendGoal_Request;
  using Response = interfaz::action::EjFibonacci_SendGoal_Response;
};

}  // namespace action

}  // namespace interfaz


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaz__action__EjFibonacci_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaz__action__EjFibonacci_GetResult_Request __declspec(deprecated)
#endif

namespace interfaz
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct EjFibonacci_GetResult_Request_
{
  using Type = EjFibonacci_GetResult_Request_<ContainerAllocator>;

  explicit EjFibonacci_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit EjFibonacci_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaz::action::EjFibonacci_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaz::action::EjFibonacci_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaz::action::EjFibonacci_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaz::action::EjFibonacci_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaz::action::EjFibonacci_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaz::action::EjFibonacci_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaz::action::EjFibonacci_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaz::action::EjFibonacci_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaz::action::EjFibonacci_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaz::action::EjFibonacci_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaz__action__EjFibonacci_GetResult_Request
    std::shared_ptr<interfaz::action::EjFibonacci_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaz__action__EjFibonacci_GetResult_Request
    std::shared_ptr<interfaz::action::EjFibonacci_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EjFibonacci_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const EjFibonacci_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EjFibonacci_GetResult_Request_

// alias to use template instance with default allocator
using EjFibonacci_GetResult_Request =
  interfaz::action::EjFibonacci_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaz


// Include directives for member types
// Member 'result'
// already included above
// #include "interfaz/action/detail/ej_fibonacci__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaz__action__EjFibonacci_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaz__action__EjFibonacci_GetResult_Response __declspec(deprecated)
#endif

namespace interfaz
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct EjFibonacci_GetResult_Response_
{
  using Type = EjFibonacci_GetResult_Response_<ContainerAllocator>;

  explicit EjFibonacci_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit EjFibonacci_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    interfaz::action::EjFibonacci_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const interfaz::action::EjFibonacci_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaz::action::EjFibonacci_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaz::action::EjFibonacci_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaz::action::EjFibonacci_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaz::action::EjFibonacci_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaz::action::EjFibonacci_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaz::action::EjFibonacci_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaz::action::EjFibonacci_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaz::action::EjFibonacci_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaz::action::EjFibonacci_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaz::action::EjFibonacci_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaz__action__EjFibonacci_GetResult_Response
    std::shared_ptr<interfaz::action::EjFibonacci_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaz__action__EjFibonacci_GetResult_Response
    std::shared_ptr<interfaz::action::EjFibonacci_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EjFibonacci_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const EjFibonacci_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EjFibonacci_GetResult_Response_

// alias to use template instance with default allocator
using EjFibonacci_GetResult_Response =
  interfaz::action::EjFibonacci_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaz

namespace interfaz
{

namespace action
{

struct EjFibonacci_GetResult
{
  using Request = interfaz::action::EjFibonacci_GetResult_Request;
  using Response = interfaz::action::EjFibonacci_GetResult_Response;
};

}  // namespace action

}  // namespace interfaz


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "interfaz/action/detail/ej_fibonacci__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaz__action__EjFibonacci_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__interfaz__action__EjFibonacci_FeedbackMessage __declspec(deprecated)
#endif

namespace interfaz
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct EjFibonacci_FeedbackMessage_
{
  using Type = EjFibonacci_FeedbackMessage_<ContainerAllocator>;

  explicit EjFibonacci_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit EjFibonacci_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    interfaz::action::EjFibonacci_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const interfaz::action::EjFibonacci_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaz::action::EjFibonacci_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaz::action::EjFibonacci_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaz::action::EjFibonacci_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaz::action::EjFibonacci_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaz::action::EjFibonacci_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaz::action::EjFibonacci_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaz::action::EjFibonacci_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaz::action::EjFibonacci_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaz::action::EjFibonacci_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaz::action::EjFibonacci_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaz__action__EjFibonacci_FeedbackMessage
    std::shared_ptr<interfaz::action::EjFibonacci_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaz__action__EjFibonacci_FeedbackMessage
    std::shared_ptr<interfaz::action::EjFibonacci_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EjFibonacci_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const EjFibonacci_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EjFibonacci_FeedbackMessage_

// alias to use template instance with default allocator
using EjFibonacci_FeedbackMessage =
  interfaz::action::EjFibonacci_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace interfaz

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace interfaz
{

namespace action
{

struct EjFibonacci
{
  /// The goal message defined in the action definition.
  using Goal = interfaz::action::EjFibonacci_Goal;
  /// The result message defined in the action definition.
  using Result = interfaz::action::EjFibonacci_Result;
  /// The feedback message defined in the action definition.
  using Feedback = interfaz::action::EjFibonacci_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = interfaz::action::EjFibonacci_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = interfaz::action::EjFibonacci_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = interfaz::action::EjFibonacci_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct EjFibonacci EjFibonacci;

}  // namespace action

}  // namespace interfaz

#endif  // INTERFAZ__ACTION__DETAIL__EJ_FIBONACCI__STRUCT_HPP_
