// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interfaces:srv/Odrive.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interfaces/srv/detail/odrive__rosidl_typesupport_introspection_c.h"
#include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interfaces/srv/detail/odrive__functions.h"
#include "interfaces/srv/detail/odrive__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Odrive_Request__rosidl_typesupport_introspection_c__Odrive_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__srv__Odrive_Request__init(message_memory);
}

void Odrive_Request__rosidl_typesupport_introspection_c__Odrive_Request_fini_function(void * message_memory)
{
  interfaces__srv__Odrive_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Odrive_Request__rosidl_typesupport_introspection_c__Odrive_Request_message_member_array[9] = {
  {
    "axis",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__Odrive_Request, axis),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "idle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__Odrive_Request, idle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "calibration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__Odrive_Request, calibration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "giro",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__Odrive_Request, giro),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ang",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__Odrive_Request, ang),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "control_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__Odrive_Request, control_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__Odrive_Request, pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__Odrive_Request, vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "torque",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__Odrive_Request, torque),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Odrive_Request__rosidl_typesupport_introspection_c__Odrive_Request_message_members = {
  "interfaces__srv",  // message namespace
  "Odrive_Request",  // message name
  9,  // number of fields
  sizeof(interfaces__srv__Odrive_Request),
  Odrive_Request__rosidl_typesupport_introspection_c__Odrive_Request_message_member_array,  // message members
  Odrive_Request__rosidl_typesupport_introspection_c__Odrive_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Odrive_Request__rosidl_typesupport_introspection_c__Odrive_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Odrive_Request__rosidl_typesupport_introspection_c__Odrive_Request_message_type_support_handle = {
  0,
  &Odrive_Request__rosidl_typesupport_introspection_c__Odrive_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, Odrive_Request)() {
  if (!Odrive_Request__rosidl_typesupport_introspection_c__Odrive_Request_message_type_support_handle.typesupport_identifier) {
    Odrive_Request__rosidl_typesupport_introspection_c__Odrive_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Odrive_Request__rosidl_typesupport_introspection_c__Odrive_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interfaces/srv/detail/odrive__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interfaces/srv/detail/odrive__functions.h"
// already included above
// #include "interfaces/srv/detail/odrive__struct.h"


// Include directives for member types
// Member `ack`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Odrive_Response__rosidl_typesupport_introspection_c__Odrive_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__srv__Odrive_Response__init(message_memory);
}

void Odrive_Response__rosidl_typesupport_introspection_c__Odrive_Response_fini_function(void * message_memory)
{
  interfaces__srv__Odrive_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Odrive_Response__rosidl_typesupport_introspection_c__Odrive_Response_message_member_array[1] = {
  {
    "ack",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__Odrive_Response, ack),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Odrive_Response__rosidl_typesupport_introspection_c__Odrive_Response_message_members = {
  "interfaces__srv",  // message namespace
  "Odrive_Response",  // message name
  1,  // number of fields
  sizeof(interfaces__srv__Odrive_Response),
  Odrive_Response__rosidl_typesupport_introspection_c__Odrive_Response_message_member_array,  // message members
  Odrive_Response__rosidl_typesupport_introspection_c__Odrive_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Odrive_Response__rosidl_typesupport_introspection_c__Odrive_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Odrive_Response__rosidl_typesupport_introspection_c__Odrive_Response_message_type_support_handle = {
  0,
  &Odrive_Response__rosidl_typesupport_introspection_c__Odrive_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, Odrive_Response)() {
  if (!Odrive_Response__rosidl_typesupport_introspection_c__Odrive_Response_message_type_support_handle.typesupport_identifier) {
    Odrive_Response__rosidl_typesupport_introspection_c__Odrive_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Odrive_Response__rosidl_typesupport_introspection_c__Odrive_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "interfaces/srv/detail/odrive__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers interfaces__srv__detail__odrive__rosidl_typesupport_introspection_c__Odrive_service_members = {
  "interfaces__srv",  // service namespace
  "Odrive",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // interfaces__srv__detail__odrive__rosidl_typesupport_introspection_c__Odrive_Request_message_type_support_handle,
  NULL  // response message
  // interfaces__srv__detail__odrive__rosidl_typesupport_introspection_c__Odrive_Response_message_type_support_handle
};

static rosidl_service_type_support_t interfaces__srv__detail__odrive__rosidl_typesupport_introspection_c__Odrive_service_type_support_handle = {
  0,
  &interfaces__srv__detail__odrive__rosidl_typesupport_introspection_c__Odrive_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, Odrive_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, Odrive_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, Odrive)() {
  if (!interfaces__srv__detail__odrive__rosidl_typesupport_introspection_c__Odrive_service_type_support_handle.typesupport_identifier) {
    interfaces__srv__detail__odrive__rosidl_typesupport_introspection_c__Odrive_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)interfaces__srv__detail__odrive__rosidl_typesupport_introspection_c__Odrive_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, Odrive_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, Odrive_Response)()->data;
  }

  return &interfaces__srv__detail__odrive__rosidl_typesupport_introspection_c__Odrive_service_type_support_handle;
}
