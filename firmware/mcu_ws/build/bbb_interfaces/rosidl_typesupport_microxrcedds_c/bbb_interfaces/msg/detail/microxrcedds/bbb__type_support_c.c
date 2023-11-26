// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from bbb_interfaces:msg/Bbb.idl
// generated code does not contain a copyright notice
#include "bbb_interfaces/msg/detail/bbb__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "bbb_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "bbb_interfaces/msg/detail/bbb__struct.h"
#include "bbb_interfaces/msg/detail/bbb__functions.h"

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

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


typedef bbb_interfaces__msg__Bbb _Bbb__ros_msg_type;

static bool _Bbb__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Bbb__ros_msg_type * ros_message = (_Bbb__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: linear
  rv = ucdr_serialize_double(cdr, ros_message->linear);
  // Member: angular
  rv = ucdr_serialize_double(cdr, ros_message->angular);

  return rv;
}

static bool _Bbb__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Bbb__ros_msg_type * ros_message = (_Bbb__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: linear
  rv = ucdr_deserialize_double(cdr, &ros_message->linear);
  // Field name: angular
  rv = ucdr_deserialize_double(cdr, &ros_message->angular);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_bbb_interfaces
size_t get_serialized_size_bbb_interfaces__msg__Bbb(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Bbb__ros_msg_type * ros_message = (const _Bbb__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: linear
  {
    const size_t item_size = sizeof(ros_message->linear);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: angular
  {
    const size_t item_size = sizeof(ros_message->angular);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Bbb__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_bbb_interfaces__msg__Bbb(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_bbb_interfaces
size_t max_serialized_size_bbb_interfaces__msg__Bbb(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: linear
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: angular
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);

  return current_alignment - initial_alignment;
}

static size_t _Bbb__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_bbb_interfaces__msg__Bbb(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Bbb = {
  "bbb_interfaces::msg",
  "Bbb",
  _Bbb__cdr_serialize,
  _Bbb__cdr_deserialize,
  _Bbb__get_serialized_size,
  get_serialized_size_bbb_interfaces__msg__Bbb,
  _Bbb__max_serialized_size
};

static rosidl_message_type_support_t _Bbb__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Bbb,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, bbb_interfaces, msg, Bbb)() {
  return &_Bbb__type_support;
}

#if defined(__cplusplus)
}
#endif
