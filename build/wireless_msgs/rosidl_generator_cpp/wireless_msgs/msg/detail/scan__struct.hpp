// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wireless_msgs:msg/Scan.idl
// generated code does not contain a copyright notice

#ifndef WIRELESS_MSGS__MSG__DETAIL__SCAN__STRUCT_HPP_
#define WIRELESS_MSGS__MSG__DETAIL__SCAN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'networks'
#include "wireless_msgs/msg/detail/network__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__wireless_msgs__msg__Scan __attribute__((deprecated))
#else
# define DEPRECATED__wireless_msgs__msg__Scan __declspec(deprecated)
#endif

namespace wireless_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Scan_
{
  using Type = Scan_<ContainerAllocator>;

  explicit Scan_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Scan_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _networks_type =
    std::vector<wireless_msgs::msg::Network_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<wireless_msgs::msg::Network_<ContainerAllocator>>>;
  _networks_type networks;

  // setters for named parameter idiom
  Type & set__networks(
    const std::vector<wireless_msgs::msg::Network_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<wireless_msgs::msg::Network_<ContainerAllocator>>> & _arg)
  {
    this->networks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wireless_msgs::msg::Scan_<ContainerAllocator> *;
  using ConstRawPtr =
    const wireless_msgs::msg::Scan_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wireless_msgs::msg::Scan_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wireless_msgs::msg::Scan_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wireless_msgs::msg::Scan_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wireless_msgs::msg::Scan_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wireless_msgs::msg::Scan_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wireless_msgs::msg::Scan_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wireless_msgs::msg::Scan_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wireless_msgs::msg::Scan_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wireless_msgs__msg__Scan
    std::shared_ptr<wireless_msgs::msg::Scan_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wireless_msgs__msg__Scan
    std::shared_ptr<wireless_msgs::msg::Scan_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Scan_ & other) const
  {
    if (this->networks != other.networks) {
      return false;
    }
    return true;
  }
  bool operator!=(const Scan_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Scan_

// alias to use template instance with default allocator
using Scan =
  wireless_msgs::msg::Scan_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wireless_msgs

#endif  // WIRELESS_MSGS__MSG__DETAIL__SCAN__STRUCT_HPP_
