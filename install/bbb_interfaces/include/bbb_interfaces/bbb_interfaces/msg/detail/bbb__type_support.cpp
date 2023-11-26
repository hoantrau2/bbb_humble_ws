// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bbb_interfaces:msg/Bbb.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bbb_interfaces/msg/detail/bbb__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace bbb_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Bbb_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bbb_interfaces::msg::Bbb(_init);
}

void Bbb_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bbb_interfaces::msg::Bbb *>(message_memory);
  typed_message->~Bbb();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Bbb_message_member_array[2] = {
  {
    "linear",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bbb_interfaces::msg::Bbb, linear),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angular",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bbb_interfaces::msg::Bbb, angular),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Bbb_message_members = {
  "bbb_interfaces::msg",  // message namespace
  "Bbb",  // message name
  2,  // number of fields
  sizeof(bbb_interfaces::msg::Bbb),
  Bbb_message_member_array,  // message members
  Bbb_init_function,  // function to initialize message memory (memory has to be allocated)
  Bbb_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Bbb_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Bbb_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace bbb_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bbb_interfaces::msg::Bbb>()
{
  return &::bbb_interfaces::msg::rosidl_typesupport_introspection_cpp::Bbb_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bbb_interfaces, msg, Bbb)() {
  return &::bbb_interfaces::msg::rosidl_typesupport_introspection_cpp::Bbb_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
