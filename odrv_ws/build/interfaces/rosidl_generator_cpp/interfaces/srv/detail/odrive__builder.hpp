// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/Odrive.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__ODRIVE__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__ODRIVE__BUILDER_HPP_

#include "interfaces/srv/detail/odrive__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Odrive_Request_torque
{
public:
  explicit Init_Odrive_Request_torque(::interfaces::srv::Odrive_Request & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::Odrive_Request torque(::interfaces::srv::Odrive_Request::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Odrive_Request msg_;
};

class Init_Odrive_Request_vel
{
public:
  explicit Init_Odrive_Request_vel(::interfaces::srv::Odrive_Request & msg)
  : msg_(msg)
  {}
  Init_Odrive_Request_torque vel(::interfaces::srv::Odrive_Request::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_Odrive_Request_torque(msg_);
  }

private:
  ::interfaces::srv::Odrive_Request msg_;
};

class Init_Odrive_Request_pos
{
public:
  explicit Init_Odrive_Request_pos(::interfaces::srv::Odrive_Request & msg)
  : msg_(msg)
  {}
  Init_Odrive_Request_vel pos(::interfaces::srv::Odrive_Request::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_Odrive_Request_vel(msg_);
  }

private:
  ::interfaces::srv::Odrive_Request msg_;
};

class Init_Odrive_Request_control_mode
{
public:
  explicit Init_Odrive_Request_control_mode(::interfaces::srv::Odrive_Request & msg)
  : msg_(msg)
  {}
  Init_Odrive_Request_pos control_mode(::interfaces::srv::Odrive_Request::_control_mode_type arg)
  {
    msg_.control_mode = std::move(arg);
    return Init_Odrive_Request_pos(msg_);
  }

private:
  ::interfaces::srv::Odrive_Request msg_;
};

class Init_Odrive_Request_ang
{
public:
  explicit Init_Odrive_Request_ang(::interfaces::srv::Odrive_Request & msg)
  : msg_(msg)
  {}
  Init_Odrive_Request_control_mode ang(::interfaces::srv::Odrive_Request::_ang_type arg)
  {
    msg_.ang = std::move(arg);
    return Init_Odrive_Request_control_mode(msg_);
  }

private:
  ::interfaces::srv::Odrive_Request msg_;
};

class Init_Odrive_Request_giro
{
public:
  explicit Init_Odrive_Request_giro(::interfaces::srv::Odrive_Request & msg)
  : msg_(msg)
  {}
  Init_Odrive_Request_ang giro(::interfaces::srv::Odrive_Request::_giro_type arg)
  {
    msg_.giro = std::move(arg);
    return Init_Odrive_Request_ang(msg_);
  }

private:
  ::interfaces::srv::Odrive_Request msg_;
};

class Init_Odrive_Request_calibration
{
public:
  explicit Init_Odrive_Request_calibration(::interfaces::srv::Odrive_Request & msg)
  : msg_(msg)
  {}
  Init_Odrive_Request_giro calibration(::interfaces::srv::Odrive_Request::_calibration_type arg)
  {
    msg_.calibration = std::move(arg);
    return Init_Odrive_Request_giro(msg_);
  }

private:
  ::interfaces::srv::Odrive_Request msg_;
};

class Init_Odrive_Request_idle
{
public:
  explicit Init_Odrive_Request_idle(::interfaces::srv::Odrive_Request & msg)
  : msg_(msg)
  {}
  Init_Odrive_Request_calibration idle(::interfaces::srv::Odrive_Request::_idle_type arg)
  {
    msg_.idle = std::move(arg);
    return Init_Odrive_Request_calibration(msg_);
  }

private:
  ::interfaces::srv::Odrive_Request msg_;
};

class Init_Odrive_Request_axis
{
public:
  Init_Odrive_Request_axis()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Odrive_Request_idle axis(::interfaces::srv::Odrive_Request::_axis_type arg)
  {
    msg_.axis = std::move(arg);
    return Init_Odrive_Request_idle(msg_);
  }

private:
  ::interfaces::srv::Odrive_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Odrive_Request>()
{
  return interfaces::srv::builder::Init_Odrive_Request_axis();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Odrive_Response_ack
{
public:
  Init_Odrive_Response_ack()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::Odrive_Response ack(::interfaces::srv::Odrive_Response::_ack_type arg)
  {
    msg_.ack = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Odrive_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Odrive_Response>()
{
  return interfaces::srv::builder::Init_Odrive_Response_ack();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__ODRIVE__BUILDER_HPP_
