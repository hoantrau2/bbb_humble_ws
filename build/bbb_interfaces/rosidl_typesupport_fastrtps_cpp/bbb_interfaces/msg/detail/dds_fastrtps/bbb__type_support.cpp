// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from bbb_interfaces:msg/Bbb.idl
// generated code does not contain a copyright notice
#include "bbb_interfaces/msg/detail/bbb__rosidl_typesupport_fastrtps_cpp.hpp"
#include "bbb_interfaces/msg/detail/bbb__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace bbb_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bbb_interfaces
cdr_serialize(
  const bbb_interfaces::msg::Bbb & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: linear
  cdr << ros_message.linear;
  // Member: angular
  cdr << ros_message.angular;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bbb_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  bbb_interfaces::msg::Bbb & ros_message)
{
  // Member: linear
  cdr >> ros_message.linear;

  // Member: angular
  cdr >> ros_message.angular;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bbb_interfaces
get_serialized_size(
  const bbb_interfaces::msg::Bbb & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: linear
  {
    size_t item_size = sizeof(ros_message.linear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angular
  {
    size_t item_size = sizeof(ros_message.angular);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bbb_interfaces
max_serialized_size_Bbb(
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


  // Member: linear
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angular
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Bbb__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const bbb_interfaces::msg::Bbb *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Bbb__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<bbb_interfaces::msg::Bbb *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Bbb__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const bbb_interfaces::msg::Bbb *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Bbb__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Bbb(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Bbb__callbacks = {
  "bbb_interfaces::msg",
  "Bbb",
  _Bbb__cdr_serialize,
  _Bbb__cdr_deserialize,
  _Bbb__get_serialized_size,
  _Bbb__max_serialized_size
};

static rosidl_message_type_support_t _Bbb__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Bbb__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace bbb_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_bbb_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<bbb_interfaces::msg::Bbb>()
{
  return &bbb_interfaces::msg::typesupport_fastrtps_cpp::_Bbb__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bbb_interfaces, msg, Bbb)() {
  return &bbb_interfaces::msg::typesupport_fastrtps_cpp::_Bbb__handle;
}

#ifdef __cplusplus
}
#endif
