// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bbb_interfaces:msg/Bbb.idl
// generated code does not contain a copyright notice

#ifndef BBB_INTERFACES__MSG__DETAIL__BBB__TRAITS_HPP_
#define BBB_INTERFACES__MSG__DETAIL__BBB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bbb_interfaces/msg/detail/bbb__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bbb_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Bbb & msg,
  std::ostream & out)
{
  out << "{";
  // member: linear
  {
    out << "linear: ";
    rosidl_generator_traits::value_to_yaml(msg.linear, out);
    out << ", ";
  }

  // member: angular
  {
    out << "angular: ";
    rosidl_generator_traits::value_to_yaml(msg.angular, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Bbb & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: linear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear: ";
    rosidl_generator_traits::value_to_yaml(msg.linear, out);
    out << "\n";
  }

  // member: angular
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular: ";
    rosidl_generator_traits::value_to_yaml(msg.angular, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Bbb & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace bbb_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use bbb_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bbb_interfaces::msg::Bbb & msg,
  std::ostream & out, size_t indentation = 0)
{
  bbb_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bbb_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const bbb_interfaces::msg::Bbb & msg)
{
  return bbb_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bbb_interfaces::msg::Bbb>()
{
  return "bbb_interfaces::msg::Bbb";
}

template<>
inline const char * name<bbb_interfaces::msg::Bbb>()
{
  return "bbb_interfaces/msg/Bbb";
}

template<>
struct has_fixed_size<bbb_interfaces::msg::Bbb>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bbb_interfaces::msg::Bbb>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bbb_interfaces::msg::Bbb>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BBB_INTERFACES__MSG__DETAIL__BBB__TRAITS_HPP_
