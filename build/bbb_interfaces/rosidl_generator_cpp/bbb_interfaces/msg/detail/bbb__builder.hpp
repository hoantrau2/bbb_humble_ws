// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bbb_interfaces:msg/Bbb.idl
// generated code does not contain a copyright notice

#ifndef BBB_INTERFACES__MSG__DETAIL__BBB__BUILDER_HPP_
#define BBB_INTERFACES__MSG__DETAIL__BBB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bbb_interfaces/msg/detail/bbb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bbb_interfaces
{

namespace msg
{

namespace builder
{

class Init_Bbb_angular
{
public:
  explicit Init_Bbb_angular(::bbb_interfaces::msg::Bbb & msg)
  : msg_(msg)
  {}
  ::bbb_interfaces::msg::Bbb angular(::bbb_interfaces::msg::Bbb::_angular_type arg)
  {
    msg_.angular = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bbb_interfaces::msg::Bbb msg_;
};

class Init_Bbb_linear
{
public:
  Init_Bbb_linear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Bbb_angular linear(::bbb_interfaces::msg::Bbb::_linear_type arg)
  {
    msg_.linear = std::move(arg);
    return Init_Bbb_angular(msg_);
  }

private:
  ::bbb_interfaces::msg::Bbb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bbb_interfaces::msg::Bbb>()
{
  return bbb_interfaces::msg::builder::Init_Bbb_linear();
}

}  // namespace bbb_interfaces

#endif  // BBB_INTERFACES__MSG__DETAIL__BBB__BUILDER_HPP_
