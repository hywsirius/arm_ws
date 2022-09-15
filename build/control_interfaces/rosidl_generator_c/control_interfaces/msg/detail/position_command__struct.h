// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_interfaces:msg/PositionCommand.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_INTERFACES__MSG__DETAIL__POSITION_COMMAND__STRUCT_H_
#define CONTROL_INTERFACES__MSG__DETAIL__POSITION_COMMAND__STRUCT_H_

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

/// Struct defined in msg/PositionCommand in the package control_interfaces.
typedef struct control_interfaces__msg__PositionCommand
{
  rosidl_runtime_c__double__Sequence command;
} control_interfaces__msg__PositionCommand;

// Struct for a sequence of control_interfaces__msg__PositionCommand.
typedef struct control_interfaces__msg__PositionCommand__Sequence
{
  control_interfaces__msg__PositionCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_interfaces__msg__PositionCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_INTERFACES__MSG__DETAIL__POSITION_COMMAND__STRUCT_H_
