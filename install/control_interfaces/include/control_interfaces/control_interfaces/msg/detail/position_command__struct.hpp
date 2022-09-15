// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_interfaces:msg/PositionCommand.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_INTERFACES__MSG__DETAIL__POSITION_COMMAND__STRUCT_HPP_
#define CONTROL_INTERFACES__MSG__DETAIL__POSITION_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__control_interfaces__msg__PositionCommand __attribute__((deprecated))
#else
# define DEPRECATED__control_interfaces__msg__PositionCommand __declspec(deprecated)
#endif

namespace control_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PositionCommand_
{
  using Type = PositionCommand_<ContainerAllocator>;

  explicit PositionCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PositionCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _command_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _command_type command;

  // setters for named parameter idiom
  Type & set__command(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_interfaces::msg::PositionCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_interfaces::msg::PositionCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_interfaces::msg::PositionCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_interfaces::msg::PositionCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_interfaces::msg::PositionCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_interfaces::msg::PositionCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_interfaces::msg::PositionCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_interfaces::msg::PositionCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_interfaces::msg::PositionCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_interfaces::msg::PositionCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_interfaces__msg__PositionCommand
    std::shared_ptr<control_interfaces::msg::PositionCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_interfaces__msg__PositionCommand
    std::shared_ptr<control_interfaces::msg::PositionCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionCommand_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionCommand_

// alias to use template instance with default allocator
using PositionCommand =
  control_interfaces::msg::PositionCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace control_interfaces

#endif  // CONTROL_INTERFACES__MSG__DETAIL__POSITION_COMMAND__STRUCT_HPP_
