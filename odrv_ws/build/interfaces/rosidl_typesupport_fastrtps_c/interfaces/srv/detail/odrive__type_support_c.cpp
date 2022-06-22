// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces:srv/Odrive.idl
// generated code does not contain a copyright notice
#include "interfaces/srv/detail/odrive__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/srv/detail/odrive__struct.h"
#include "interfaces/srv/detail/odrive__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Odrive_Request__ros_msg_type = interfaces__srv__Odrive_Request;

static bool _Odrive_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Odrive_Request__ros_msg_type * ros_message = static_cast<const _Odrive_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: axis
  {
    cdr << ros_message->axis;
  }

  // Field name: idle
  {
    cdr << (ros_message->idle ? true : false);
  }

  // Field name: calibration
  {
    cdr << (ros_message->calibration ? true : false);
  }

  // Field name: giro
  {
    cdr << (ros_message->giro ? true : false);
  }

  // Field name: ang
  {
    cdr << ros_message->ang;
  }

  // Field name: control_mode
  {
    cdr << ros_message->control_mode;
  }

  // Field name: pos
  {
    cdr << ros_message->pos;
  }

  // Field name: vel
  {
    cdr << ros_message->vel;
  }

  // Field name: torque
  {
    cdr << ros_message->torque;
  }

  return true;
}

static bool _Odrive_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Odrive_Request__ros_msg_type * ros_message = static_cast<_Odrive_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: axis
  {
    cdr >> ros_message->axis;
  }

  // Field name: idle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->idle = tmp ? true : false;
  }

  // Field name: calibration
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->calibration = tmp ? true : false;
  }

  // Field name: giro
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->giro = tmp ? true : false;
  }

  // Field name: ang
  {
    cdr >> ros_message->ang;
  }

  // Field name: control_mode
  {
    cdr >> ros_message->control_mode;
  }

  // Field name: pos
  {
    cdr >> ros_message->pos;
  }

  // Field name: vel
  {
    cdr >> ros_message->vel;
  }

  // Field name: torque
  {
    cdr >> ros_message->torque;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__srv__Odrive_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Odrive_Request__ros_msg_type * ros_message = static_cast<const _Odrive_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name axis
  {
    size_t item_size = sizeof(ros_message->axis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name idle
  {
    size_t item_size = sizeof(ros_message->idle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name calibration
  {
    size_t item_size = sizeof(ros_message->calibration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name giro
  {
    size_t item_size = sizeof(ros_message->giro);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ang
  {
    size_t item_size = sizeof(ros_message->ang);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name control_mode
  {
    size_t item_size = sizeof(ros_message->control_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos
  {
    size_t item_size = sizeof(ros_message->pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel
  {
    size_t item_size = sizeof(ros_message->vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name torque
  {
    size_t item_size = sizeof(ros_message->torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Odrive_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__srv__Odrive_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__srv__Odrive_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: axis
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: idle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: calibration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: giro
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ang
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: control_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: torque
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Odrive_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces__srv__Odrive_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Odrive_Request = {
  "interfaces::srv",
  "Odrive_Request",
  _Odrive_Request__cdr_serialize,
  _Odrive_Request__cdr_deserialize,
  _Odrive_Request__get_serialized_size,
  _Odrive_Request__max_serialized_size
};

static rosidl_message_type_support_t _Odrive_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Odrive_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, Odrive_Request)() {
  return &_Odrive_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "interfaces/srv/detail/odrive__struct.h"
// already included above
// #include "interfaces/srv/detail/odrive__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // ack
#include "rosidl_runtime_c/string_functions.h"  // ack

// forward declare type support functions


using _Odrive_Response__ros_msg_type = interfaces__srv__Odrive_Response;

static bool _Odrive_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Odrive_Response__ros_msg_type * ros_message = static_cast<const _Odrive_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ack
  {
    const rosidl_runtime_c__String * str = &ros_message->ack;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Odrive_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Odrive_Response__ros_msg_type * ros_message = static_cast<_Odrive_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ack
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->ack.data) {
      rosidl_runtime_c__String__init(&ros_message->ack);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->ack,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'ack'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__srv__Odrive_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Odrive_Response__ros_msg_type * ros_message = static_cast<const _Odrive_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ack
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->ack.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Odrive_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__srv__Odrive_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__srv__Odrive_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: ack
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Odrive_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces__srv__Odrive_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Odrive_Response = {
  "interfaces::srv",
  "Odrive_Response",
  _Odrive_Response__cdr_serialize,
  _Odrive_Response__cdr_deserialize,
  _Odrive_Response__get_serialized_size,
  _Odrive_Response__max_serialized_size
};

static rosidl_message_type_support_t _Odrive_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Odrive_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, Odrive_Response)() {
  return &_Odrive_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/srv/odrive.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Odrive__callbacks = {
  "interfaces::srv",
  "Odrive",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, Odrive_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, Odrive_Response)(),
};

static rosidl_service_type_support_t Odrive__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Odrive__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, Odrive)() {
  return &Odrive__handle;
}

#if defined(__cplusplus)
}
#endif
