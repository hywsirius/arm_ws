// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from control_interfaces:msg/VelocityCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "control_interfaces/msg/detail/velocity_command__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace control_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void VelocityCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) control_interfaces::msg::VelocityCommand(_init);
}

void VelocityCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<control_interfaces::msg::VelocityCommand *>(message_memory);
  typed_message->~VelocityCommand();
}

size_t size_function__VelocityCommand__command(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VelocityCommand__command(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__VelocityCommand__command(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__VelocityCommand__command(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__VelocityCommand__command(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__VelocityCommand__command(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__VelocityCommand__command(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__VelocityCommand__command(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VelocityCommand_message_member_array[1] = {
  {
    "command",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_interfaces::msg::VelocityCommand, command),  // bytes offset in struct
    nullptr,  // default value
    size_function__VelocityCommand__command,  // size() function pointer
    get_const_function__VelocityCommand__command,  // get_const(index) function pointer
    get_function__VelocityCommand__command,  // get(index) function pointer
    fetch_function__VelocityCommand__command,  // fetch(index, &value) function pointer
    assign_function__VelocityCommand__command,  // assign(index, value) function pointer
    resize_function__VelocityCommand__command  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VelocityCommand_message_members = {
  "control_interfaces::msg",  // message namespace
  "VelocityCommand",  // message name
  1,  // number of fields
  sizeof(control_interfaces::msg::VelocityCommand),
  VelocityCommand_message_member_array,  // message members
  VelocityCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  VelocityCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VelocityCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VelocityCommand_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace control_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<control_interfaces::msg::VelocityCommand>()
{
  return &::control_interfaces::msg::rosidl_typesupport_introspection_cpp::VelocityCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_interfaces, msg, VelocityCommand)() {
  return &::control_interfaces::msg::rosidl_typesupport_introspection_cpp::VelocityCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
