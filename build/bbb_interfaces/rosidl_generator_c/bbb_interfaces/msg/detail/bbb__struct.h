// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bbb_interfaces:msg/Bbb.idl
// generated code does not contain a copyright notice

#ifndef BBB_INTERFACES__MSG__DETAIL__BBB__STRUCT_H_
#define BBB_INTERFACES__MSG__DETAIL__BBB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Bbb in the package bbb_interfaces.
typedef struct bbb_interfaces__msg__Bbb
{
  double linear;
  double angular;
} bbb_interfaces__msg__Bbb;

// Struct for a sequence of bbb_interfaces__msg__Bbb.
typedef struct bbb_interfaces__msg__Bbb__Sequence
{
  bbb_interfaces__msg__Bbb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bbb_interfaces__msg__Bbb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BBB_INTERFACES__MSG__DETAIL__BBB__STRUCT_H_
