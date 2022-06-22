// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/Motor.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__MOTOR__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__MOTOR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__Motor __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__Motor __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Motor_
{
  using Type = Motor_<ContainerAllocator>;

  explicit Motor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocidad_d = 0.0f;
      this->torque_d = 0.0f;
      this->velocidad_i = 0.0f;
      this->torque_i = 0.0f;
    }
  }

  explicit Motor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocidad_d = 0.0f;
      this->torque_d = 0.0f;
      this->velocidad_i = 0.0f;
      this->torque_i = 0.0f;
    }
  }

  // field types and members
  using _velocidad_d_type =
    float;
  _velocidad_d_type velocidad_d;
  using _torque_d_type =
    float;
  _torque_d_type torque_d;
  using _velocidad_i_type =
    float;
  _velocidad_i_type velocidad_i;
  using _torque_i_type =
    float;
  _torque_i_type torque_i;

  // setters for named parameter idiom
  Type & set__velocidad_d(
    const float & _arg)
  {
    this->velocidad_d = _arg;
    return *this;
  }
  Type & set__torque_d(
    const float & _arg)
  {
    this->torque_d = _arg;
    return *this;
  }
  Type & set__velocidad_i(
    const float & _arg)
  {
    this->velocidad_i = _arg;
    return *this;
  }
  Type & set__torque_i(
    const float & _arg)
  {
    this->torque_i = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::Motor_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::Motor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::Motor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::Motor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::Motor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::Motor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::Motor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::Motor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::Motor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::Motor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__Motor
    std::shared_ptr<interfaces::msg::Motor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__Motor
    std::shared_ptr<interfaces::msg::Motor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Motor_ & other) const
  {
    if (this->velocidad_d != other.velocidad_d) {
      return false;
    }
    if (this->torque_d != other.torque_d) {
      return false;
    }
    if (this->velocidad_i != other.velocidad_i) {
      return false;
    }
    if (this->torque_i != other.torque_i) {
      return false;
    }
    return true;
  }
  bool operator!=(const Motor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Motor_

// alias to use template instance with default allocator
using Motor =
  interfaces::msg::Motor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__MOTOR__STRUCT_HPP_
