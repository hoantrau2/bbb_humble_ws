// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from bbb_interfaces:msg/Bbb.idl
// generated code does not contain a copyright notice
#include "bbb_interfaces/msg/detail/bbb__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "bbb_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "bbb_interfaces/msg/detail/bbb__struct.h"
#include "bbb_interfaces/msg/detail/bbb__functions.h"
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


using _Bbb__ros_msg_type = bbb_interfaces__msg__Bbb;

static bool _Bbb__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Bbb__ros_msg_type * ros_message = static_cast<const _Bbb__ros_msg_type *>(untyped_ros_message);
  // Field name: linear
  {
    cdr << ros_message->linear;
  }

  // Field name: angular
  {
    cdr << ros_message->angular;
  }

  return true;
}

static bool _Bbb__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Bbb__ros_msg_type * ros_message = static_cast<_Bbb__ros_msg_type *>(untyped_ros_message);
  // Field name: linear
  {
    cdr >> ros_message->linear;
  }

  // Field name: angular
  {
    cdr >> ros_message->angular;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bbb_interfaces
size_t get_serialized_size_bbb_interfaces__msg__Bbb(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Bbb__ros_msg_type * ros_message = static_cast<const _Bbb__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name linear
  {
    size_t item_size = sizeof(ros_message->linear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angular
  {
    size_t item_size = sizeof(ros_message->angular);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Bbb__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_bbb_interfaces__msg__Bbb(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bbb_interfaces
size_t max_serialized_size_bbb_interfaces__msg__Bbb(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: linear
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: angular
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Bbb__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_bbb_interfaces__msg__Bbb(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Bbb = {
  "bbb_interfaces::msg",
  "Bbb",
  _Bbb__cdr_serialize,
  _Bbb__cdr_deserialize,
  _Bbb__get_serialized_size,
  _Bbb__max_serialized_size
};

static rosidl_message_type_support_t _Bbb__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Bbb,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bbb_interfaces, msg, Bbb)() {
  return &_Bbb__type_support;
}

#if defined(__cplusplus)
}
#endif
