// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/Odrive.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__ODRIVE__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__ODRIVE__TRAITS_HPP_

#include "interfaces/srv/detail/odrive__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Odrive_Request>()
{
  return "interfaces::srv::Odrive_Request";
}

template<>
inline const char * name<interfaces::srv::Odrive_Request>()
{
  return "interfaces/srv/Odrive_Request";
}

template<>
struct has_fixed_size<interfaces::srv::Odrive_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::Odrive_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::Odrive_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Odrive_Response>()
{
  return "interfaces::srv::Odrive_Response";
}

template<>
inline const char * name<interfaces::srv::Odrive_Response>()
{
  return "interfaces/srv/Odrive_Response";
}

template<>
struct has_fixed_size<interfaces::srv::Odrive_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::Odrive_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::Odrive_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Odrive>()
{
  return "interfaces::srv::Odrive";
}

template<>
inline const char * name<interfaces::srv::Odrive>()
{
  return "interfaces/srv/Odrive";
}

template<>
struct has_fixed_size<interfaces::srv::Odrive>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::Odrive_Request>::value &&
    has_fixed_size<interfaces::srv::Odrive_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::Odrive>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::Odrive_Request>::value &&
    has_bounded_size<interfaces::srv::Odrive_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::Odrive>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::Odrive_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::Odrive_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__ODRIVE__TRAITS_HPP_
