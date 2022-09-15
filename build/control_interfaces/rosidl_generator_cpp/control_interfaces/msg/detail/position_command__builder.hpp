// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_interfaces:msg/PositionCommand.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_INTERFACES__MSG__DETAIL__POSITION_COMMAND__BUILDER_HPP_
#define CONTROL_INTERFACES__MSG__DETAIL__POSITION_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_interfaces/msg/detail/position_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_interfaces
{

namespace msg
{

namespace builder
{

class Init_PositionCommand_command
{
public:
  Init_PositionCommand_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::control_interfaces::msg::PositionCommand command(::control_interfaces::msg::PositionCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::msg::PositionCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::msg::PositionCommand>()
{
  return control_interfaces::msg::builder::Init_PositionCommand_command();
}

}  // namespace control_interfaces

#endif  // CONTROL_INTERFACES__MSG__DETAIL__POSITION_COMMAND__BUILDER_HPP_
