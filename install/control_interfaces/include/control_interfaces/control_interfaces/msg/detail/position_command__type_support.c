// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from control_interfaces:msg/PositionCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "control_interfaces/msg/detail/position_command__rosidl_typesupport_introspection_c.h"
#include "control_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "control_interfaces/msg/detail/position_command__functions.h"
#include "control_interfaces/msg/detail/position_command__struct.h"


// Include directives for member types
// Member `command`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void control_interfaces__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_interfaces__msg__PositionCommand__init(message_memory);
}

void control_interfaces__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_fini_function(void * message_memory)
{
  control_interfaces__msg__PositionCommand__fini(message_memory);
}

size_t control_interfaces__msg__PositionCommand__rosidl_typesupport_introspection_c__size_function__PositionCommand__command(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * control_interfaces__msg__PositionCommand__rosidl_typesupport_introspection_c__get_const_function__PositionCommand__command(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * control_interfaces__msg__PositionCommand__rosidl_typesupport_introspection_c__get_function__PositionCommand__command(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void control_interfaces__msg__PositionCommand__rosidl_typesupport_introspection_c__fetch_function__PositionCommand__command(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    control_interfaces__msg__PositionCommand__rosidl_typesupport_introspection_c__get_const_function__PositionCommand__command(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void control_interfaces__msg__PositionCommand__rosidl_typesupport_introspection_c__assign_function__PositionCommand__command(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    control_interfaces__msg__PositionCommand__rosidl_typesupport_introspection_c__get_function__PositionCommand__command(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool control_interfaces__msg__PositionCommand__rosidl_typesupport_introspection_c__resize_function__PositionCommand__command(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember control_interfaces__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_message_member_array[1] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_interfaces__msg__PositionCommand, command),  // bytes offset in struct
    NULL,  // default value
    control_interfaces__msg__PositionCommand__rosidl_typesupport_introspection_c__size_function__PositionCommand__command,  // size() function pointer
    control_interfaces__msg__PositionCommand__rosidl_typesupport_introspection_c__get_const_function__PositionCommand__command,  // get_const(index) function pointer
    control_interfaces__msg__PositionCommand__rosidl_typesupport_introspection_c__get_function__PositionCommand__command,  // get(index) function pointer
    control_interfaces__msg__PositionCommand__rosidl_typesupport_introspection_c__fetch_function__PositionCommand__command,  // fetch(index, &value) function pointer
    control_interfaces__msg__PositionCommand__rosidl_typesupport_introspection_c__assign_function__PositionCommand__command,  // assign(index, value) function pointer
    control_interfaces__msg__PositionCommand__rosidl_typesupport_introspection_c__resize_function__PositionCommand__command  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers control_interfaces__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_message_members = {
  "control_interfaces__msg",  // message namespace
  "PositionCommand",  // message name
  1,  // number of fields
  sizeof(control_interfaces__msg__PositionCommand),
  control_interfaces__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_message_member_array,  // message members
  control_interfaces__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  control_interfaces__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t control_interfaces__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_message_type_support_handle = {
  0,
  &control_interfaces__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_interfaces, msg, PositionCommand)() {
  if (!control_interfaces__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_message_type_support_handle.typesupport_identifier) {
    control_interfaces__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &control_interfaces__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
