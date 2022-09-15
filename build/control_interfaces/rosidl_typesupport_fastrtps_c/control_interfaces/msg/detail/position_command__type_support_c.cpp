// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from control_interfaces:msg/PositionCommand.idl
// generated code does not contain a copyright notice
#include "control_interfaces/msg/detail/position_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "control_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "control_interfaces/msg/detail/position_command__struct.h"
#include "control_interfaces/msg/detail/position_command__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // command
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // command

// forward declare type support functions


using _PositionCommand__ros_msg_type = control_interfaces__msg__PositionCommand;

static bool _PositionCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PositionCommand__ros_msg_type * ros_message = static_cast<const _PositionCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: command
  {
    size_t size = ros_message->command.size;
    auto array_ptr = ros_message->command.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _PositionCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PositionCommand__ros_msg_type * ros_message = static_cast<_PositionCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: command
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->command.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->command);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->command, size)) {
      fprintf(stderr, "failed to create array for field 'command'");
      return false;
    }
    auto array_ptr = ros_message->command.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_interfaces
size_t get_serialized_size_control_interfaces__msg__PositionCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PositionCommand__ros_msg_type * ros_message = static_cast<const _PositionCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name command
  {
    size_t array_size = ros_message->command.size;
    auto array_ptr = ros_message->command.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PositionCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_control_interfaces__msg__PositionCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_interfaces
size_t max_serialized_size_control_interfaces__msg__PositionCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: command
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _PositionCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_control_interfaces__msg__PositionCommand(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PositionCommand = {
  "control_interfaces::msg",
  "PositionCommand",
  _PositionCommand__cdr_serialize,
  _PositionCommand__cdr_deserialize,
  _PositionCommand__get_serialized_size,
  _PositionCommand__max_serialized_size
};

static rosidl_message_type_support_t _PositionCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PositionCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_interfaces, msg, PositionCommand)() {
  return &_PositionCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
