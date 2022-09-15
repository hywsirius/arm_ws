// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_interfaces:msg/VelocityCommand.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_INTERFACES__MSG__DETAIL__VELOCITY_COMMAND__STRUCT_H_
#define CONTROL_INTERFACES__MSG__DETAIL__VELOCITY_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/VelocityCommand in the package control_interfaces.
typedef struct control_interfaces__msg__VelocityCommand
{
  rosidl_runtime_c__double__Sequence command;
} control_interfaces__msg__VelocityCommand;

// Struct for a sequence of control_interfaces__msg__VelocityCommand.
typedef struct control_interfaces__msg__VelocityCommand__Sequence
{
  control_interfaces__msg__VelocityCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_interfaces__msg__VelocityCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_INTERFACES__MSG__DETAIL__VELOCITY_COMMAND__STRUCT_H_
