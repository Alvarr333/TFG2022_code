// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/Odrive.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__ODRIVE__STRUCT_HPP_
#define INTERFACES__SRV__DETAIL__ODRIVE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__Odrive_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__Odrive_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Odrive_Request_
{
  using Type = Odrive_Request_<ContainerAllocator>;

  explicit Odrive_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->axis = 0l;
      this->idle = false;
      this->calibration = false;
      this->giro = false;
      this->ang = 0.0f;
      this->control_mode = 0ll;
      this->pos = 0.0f;
      this->vel = 0.0f;
      this->torque = 0.0f;
    }
  }

  explicit Odrive_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->axis = 0l;
      this->idle = false;
      this->calibration = false;
      this->giro = false;
      this->ang = 0.0f;
      this->control_mode = 0ll;
      this->pos = 0.0f;
      this->vel = 0.0f;
      this->torque = 0.0f;
    }
  }

  // field types and members
  using _axis_type =
    int32_t;
  _axis_type axis;
  using _idle_type =
    bool;
  _idle_type idle;
  using _calibration_type =
    bool;
  _calibration_type calibration;
  using _giro_type =
    bool;
  _giro_type giro;
  using _ang_type =
    float;
  _ang_type ang;
  using _control_mode_type =
    int64_t;
  _control_mode_type control_mode;
  using _pos_type =
    float;
  _pos_type pos;
  using _vel_type =
    float;
  _vel_type vel;
  using _torque_type =
    float;
  _torque_type torque;

  // setters for named parameter idiom
  Type & set__axis(
    const int32_t & _arg)
  {
    this->axis = _arg;
    return *this;
  }
  Type & set__idle(
    const bool & _arg)
  {
    this->idle = _arg;
    return *this;
  }
  Type & set__calibration(
    const bool & _arg)
  {
    this->calibration = _arg;
    return *this;
  }
  Type & set__giro(
    const bool & _arg)
  {
    this->giro = _arg;
    return *this;
  }
  Type & set__ang(
    const float & _arg)
  {
    this->ang = _arg;
    return *this;
  }
  Type & set__control_mode(
    const int64_t & _arg)
  {
    this->control_mode = _arg;
    return *this;
  }
  Type & set__pos(
    const float & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__vel(
    const float & _arg)
  {
    this->vel = _arg;
    return *this;
  }
  Type & set__torque(
    const float & _arg)
  {
    this->torque = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::Odrive_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::Odrive_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::Odrive_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::Odrive_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Odrive_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Odrive_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Odrive_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Odrive_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::Odrive_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::Odrive_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__Odrive_Request
    std::shared_ptr<interfaces::srv::Odrive_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__Odrive_Request
    std::shared_ptr<interfaces::srv::Odrive_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Odrive_Request_ & other) const
  {
    if (this->axis != other.axis) {
      return false;
    }
    if (this->idle != other.idle) {
      return false;
    }
    if (this->calibration != other.calibration) {
      return false;
    }
    if (this->giro != other.giro) {
      return false;
    }
    if (this->ang != other.ang) {
      return false;
    }
    if (this->control_mode != other.control_mode) {
      return false;
    }
    if (this->pos != other.pos) {
      return false;
    }
    if (this->vel != other.vel) {
      return false;
    }
    if (this->torque != other.torque) {
      return false;
    }
    return true;
  }
  bool operator!=(const Odrive_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Odrive_Request_

// alias to use template instance with default allocator
using Odrive_Request =
  interfaces::srv::Odrive_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__Odrive_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__Odrive_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Odrive_Response_
{
  using Type = Odrive_Response_<ContainerAllocator>;

  explicit Odrive_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ack = "";
    }
  }

  explicit Odrive_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ack(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ack = "";
    }
  }

  // field types and members
  using _ack_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _ack_type ack;

  // setters for named parameter idiom
  Type & set__ack(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->ack = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::Odrive_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::Odrive_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::Odrive_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::Odrive_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Odrive_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Odrive_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Odrive_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Odrive_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::Odrive_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::Odrive_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__Odrive_Response
    std::shared_ptr<interfaces::srv::Odrive_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__Odrive_Response
    std::shared_ptr<interfaces::srv::Odrive_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Odrive_Response_ & other) const
  {
    if (this->ack != other.ack) {
      return false;
    }
    return true;
  }
  bool operator!=(const Odrive_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Odrive_Response_

// alias to use template instance with default allocator
using Odrive_Response =
  interfaces::srv::Odrive_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct Odrive
{
  using Request = interfaces::srv::Odrive_Request;
  using Response = interfaces::srv::Odrive_Response;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__ODRIVE__STRUCT_HPP_
