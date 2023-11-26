// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from bbb_interfaces:msg/Bbb.idl
// generated code does not contain a copyright notice

#ifndef BBB_INTERFACES__MSG__DETAIL__BBB__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define BBB_INTERFACES__MSG__DETAIL__BBB__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "bbb_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "bbb_interfaces/msg/detail/bbb__struct.hpp"

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

#include "fastcdr/Cdr.h"

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
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bbb_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  bbb_interfaces::msg::Bbb & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bbb_interfaces
get_serialized_size(
  const bbb_interfaces::msg::Bbb & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bbb_interfaces
max_serialized_size_Bbb(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace bbb_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bbb_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bbb_interfaces, msg, Bbb)();

#ifdef __cplusplus
}
#endif

#endif  // BBB_INTERFACES__MSG__DETAIL__BBB__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
