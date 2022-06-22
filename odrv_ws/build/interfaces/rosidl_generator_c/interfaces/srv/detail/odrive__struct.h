// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/Odrive.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__ODRIVE__STRUCT_H_
#define INTERFACES__SRV__DETAIL__ODRIVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Odrive in the package interfaces.
typedef struct interfaces__srv__Odrive_Request
{
  int32_t axis;
  bool idle;
  bool calibration;
  bool giro;
  float ang;
  int64_t control_mode;
  float pos;
  float vel;
  float torque;
} interfaces__srv__Odrive_Request;

// Struct for a sequence of interfaces__srv__Odrive_Request.
typedef struct interfaces__srv__Odrive_Request__Sequence
{
  interfaces__srv__Odrive_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__Odrive_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'ack'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/Odrive in the package interfaces.
typedef struct interfaces__srv__Odrive_Response
{
  rosidl_runtime_c__String ack;
} interfaces__srv__Odrive_Response;

// Struct for a sequence of interfaces__srv__Odrive_Response.
typedef struct interfaces__srv__Odrive_Response__Sequence
{
  interfaces__srv__Odrive_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__Odrive_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__ODRIVE__STRUCT_H_
