// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bbb_interfaces:msg/Bbb.idl
// generated code does not contain a copyright notice
#include "bbb_interfaces/msg/detail/bbb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bbb_interfaces__msg__Bbb__init(bbb_interfaces__msg__Bbb * msg)
{
  if (!msg) {
    return false;
  }
  // linear
  // angular
  return true;
}

void
bbb_interfaces__msg__Bbb__fini(bbb_interfaces__msg__Bbb * msg)
{
  if (!msg) {
    return;
  }
  // linear
  // angular
}

bool
bbb_interfaces__msg__Bbb__are_equal(const bbb_interfaces__msg__Bbb * lhs, const bbb_interfaces__msg__Bbb * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // linear
  if (lhs->linear != rhs->linear) {
    return false;
  }
  // angular
  if (lhs->angular != rhs->angular) {
    return false;
  }
  return true;
}

bool
bbb_interfaces__msg__Bbb__copy(
  const bbb_interfaces__msg__Bbb * input,
  bbb_interfaces__msg__Bbb * output)
{
  if (!input || !output) {
    return false;
  }
  // linear
  output->linear = input->linear;
  // angular
  output->angular = input->angular;
  return true;
}

bbb_interfaces__msg__Bbb *
bbb_interfaces__msg__Bbb__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bbb_interfaces__msg__Bbb * msg = (bbb_interfaces__msg__Bbb *)allocator.allocate(sizeof(bbb_interfaces__msg__Bbb), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bbb_interfaces__msg__Bbb));
  bool success = bbb_interfaces__msg__Bbb__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bbb_interfaces__msg__Bbb__destroy(bbb_interfaces__msg__Bbb * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bbb_interfaces__msg__Bbb__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bbb_interfaces__msg__Bbb__Sequence__init(bbb_interfaces__msg__Bbb__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bbb_interfaces__msg__Bbb * data = NULL;

  if (size) {
    data = (bbb_interfaces__msg__Bbb *)allocator.zero_allocate(size, sizeof(bbb_interfaces__msg__Bbb), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bbb_interfaces__msg__Bbb__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bbb_interfaces__msg__Bbb__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
bbb_interfaces__msg__Bbb__Sequence__fini(bbb_interfaces__msg__Bbb__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      bbb_interfaces__msg__Bbb__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

bbb_interfaces__msg__Bbb__Sequence *
bbb_interfaces__msg__Bbb__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bbb_interfaces__msg__Bbb__Sequence * array = (bbb_interfaces__msg__Bbb__Sequence *)allocator.allocate(sizeof(bbb_interfaces__msg__Bbb__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bbb_interfaces__msg__Bbb__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bbb_interfaces__msg__Bbb__Sequence__destroy(bbb_interfaces__msg__Bbb__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bbb_interfaces__msg__Bbb__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bbb_interfaces__msg__Bbb__Sequence__are_equal(const bbb_interfaces__msg__Bbb__Sequence * lhs, const bbb_interfaces__msg__Bbb__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bbb_interfaces__msg__Bbb__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bbb_interfaces__msg__Bbb__Sequence__copy(
  const bbb_interfaces__msg__Bbb__Sequence * input,
  bbb_interfaces__msg__Bbb__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bbb_interfaces__msg__Bbb);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bbb_interfaces__msg__Bbb * data =
      (bbb_interfaces__msg__Bbb *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bbb_interfaces__msg__Bbb__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bbb_interfaces__msg__Bbb__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bbb_interfaces__msg__Bbb__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
