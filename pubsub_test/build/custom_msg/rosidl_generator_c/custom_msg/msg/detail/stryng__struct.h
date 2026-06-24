// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msg:msg/Stryng.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG__MSG__DETAIL__STRYNG__STRUCT_H_
#define CUSTOM_MSG__MSG__DETAIL__STRYNG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "std_msgs/msg/detail/string__struct.h"

/// Struct defined in msg/Stryng in the package custom_msg.
typedef struct custom_msg__msg__Stryng
{
  std_msgs__msg__String message;
} custom_msg__msg__Stryng;

// Struct for a sequence of custom_msg__msg__Stryng.
typedef struct custom_msg__msg__Stryng__Sequence
{
  custom_msg__msg__Stryng * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msg__msg__Stryng__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSG__MSG__DETAIL__STRYNG__STRUCT_H_
