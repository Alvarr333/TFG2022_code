// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/Motor.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__MOTOR__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__MOTOR__BUILDER_HPP_

#include "interfaces/msg/detail/motor__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_Motor_torque_i
{
public:
  explicit Init_Motor_torque_i(::interfaces::msg::Motor & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::Motor torque_i(::interfaces::msg::Motor::_torque_i_type arg)
  {
    msg_.torque_i = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::Motor msg_;
};

class Init_Motor_velocidad_i
{
public:
  explicit Init_Motor_velocidad_i(::interfaces::msg::Motor & msg)
  : msg_(msg)
  {}
  Init_Motor_torque_i velocidad_i(::interfaces::msg::Motor::_velocidad_i_type arg)
  {
    msg_.velocidad_i = std::move(arg);
    return Init_Motor_torque_i(msg_);
  }

private:
  ::interfaces::msg::Motor msg_;
};

class Init_Motor_torque_d
{
public:
  explicit Init_Motor_torque_d(::interfaces::msg::Motor & msg)
  : msg_(msg)
  {}
  Init_Motor_velocidad_i torque_d(::interfaces::msg::Motor::_torque_d_type arg)
  {
    msg_.torque_d = std::move(arg);
    return Init_Motor_velocidad_i(msg_);
  }

private:
  ::interfaces::msg::Motor msg_;
};

class Init_Motor_velocidad_d
{
public:
  Init_Motor_velocidad_d()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motor_torque_d velocidad_d(::interfaces::msg::Motor::_velocidad_d_type arg)
  {
    msg_.velocidad_d = std::move(arg);
    return Init_Motor_torque_d(msg_);
  }

private:
  ::interfaces::msg::Motor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::Motor>()
{
  return interfaces::msg::builder::Init_Motor_velocidad_d();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__MOTOR__BUILDER_HPP_
