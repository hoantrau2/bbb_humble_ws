// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bbb_interfaces:msg/Bbb.idl
// generated code does not contain a copyright notice

#ifndef BBB_INTERFACES__MSG__DETAIL__BBB__STRUCT_HPP_
#define BBB_INTERFACES__MSG__DETAIL__BBB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bbb_interfaces__msg__Bbb __attribute__((deprecated))
#else
# define DEPRECATED__bbb_interfaces__msg__Bbb __declspec(deprecated)
#endif

namespace bbb_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Bbb_
{
  using Type = Bbb_<ContainerAllocator>;

  explicit Bbb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear = 0.0;
      this->angular = 0.0;
    }
  }

  explicit Bbb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear = 0.0;
      this->angular = 0.0;
    }
  }

  // field types and members
  using _linear_type =
    double;
  _linear_type linear;
  using _angular_type =
    double;
  _angular_type angular;

  // setters for named parameter idiom
  Type & set__linear(
    const double & _arg)
  {
    this->linear = _arg;
    return *this;
  }
  Type & set__angular(
    const double & _arg)
  {
    this->angular = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bbb_interfaces::msg::Bbb_<ContainerAllocator> *;
  using ConstRawPtr =
    const bbb_interfaces::msg::Bbb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bbb_interfaces::msg::Bbb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bbb_interfaces::msg::Bbb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bbb_interfaces::msg::Bbb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bbb_interfaces::msg::Bbb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bbb_interfaces::msg::Bbb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bbb_interfaces::msg::Bbb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bbb_interfaces::msg::Bbb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bbb_interfaces::msg::Bbb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bbb_interfaces__msg__Bbb
    std::shared_ptr<bbb_interfaces::msg::Bbb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bbb_interfaces__msg__Bbb
    std::shared_ptr<bbb_interfaces::msg::Bbb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Bbb_ & other) const
  {
    if (this->linear != other.linear) {
      return false;
    }
    if (this->angular != other.angular) {
      return false;
    }
    return true;
  }
  bool operator!=(const Bbb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Bbb_

// alias to use template instance with default allocator
using Bbb =
  bbb_interfaces::msg::Bbb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bbb_interfaces

#endif  // BBB_INTERFACES__MSG__DETAIL__BBB__STRUCT_HPP_
