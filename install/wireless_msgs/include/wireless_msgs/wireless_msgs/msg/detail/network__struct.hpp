// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wireless_msgs:msg/Network.idl
// generated code does not contain a copyright notice

#ifndef WIRELESS_MSGS__MSG__DETAIL__NETWORK__STRUCT_HPP_
#define WIRELESS_MSGS__MSG__DETAIL__NETWORK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wireless_msgs__msg__Network __attribute__((deprecated))
#else
# define DEPRECATED__wireless_msgs__msg__Network __declspec(deprecated)
#endif

namespace wireless_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Network_
{
  using Type = Network_<ContainerAllocator>;

  explicit Network_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->essid = "";
      this->mac = "";
      this->mode = "";
      this->frequency = "";
      this->encryption = false;
    }
  }

  explicit Network_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc),
    essid(_alloc),
    mac(_alloc),
    mode(_alloc),
    frequency(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->essid = "";
      this->mac = "";
      this->mode = "";
      this->frequency = "";
      this->encryption = false;
    }
  }

  // field types and members
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _essid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _essid_type essid;
  using _mac_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mac_type mac;
  using _mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mode_type mode;
  using _frequency_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frequency_type frequency;
  using _encryption_type =
    bool;
  _encryption_type encryption;

  // setters for named parameter idiom
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__essid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->essid = _arg;
    return *this;
  }
  Type & set__mac(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mac = _arg;
    return *this;
  }
  Type & set__mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__frequency(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frequency = _arg;
    return *this;
  }
  Type & set__encryption(
    const bool & _arg)
  {
    this->encryption = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wireless_msgs::msg::Network_<ContainerAllocator> *;
  using ConstRawPtr =
    const wireless_msgs::msg::Network_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wireless_msgs::msg::Network_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wireless_msgs::msg::Network_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wireless_msgs::msg::Network_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wireless_msgs::msg::Network_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wireless_msgs::msg::Network_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wireless_msgs::msg::Network_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wireless_msgs::msg::Network_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wireless_msgs::msg::Network_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wireless_msgs__msg__Network
    std::shared_ptr<wireless_msgs::msg::Network_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wireless_msgs__msg__Network
    std::shared_ptr<wireless_msgs::msg::Network_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Network_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->essid != other.essid) {
      return false;
    }
    if (this->mac != other.mac) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->frequency != other.frequency) {
      return false;
    }
    if (this->encryption != other.encryption) {
      return false;
    }
    return true;
  }
  bool operator!=(const Network_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Network_

// alias to use template instance with default allocator
using Network =
  wireless_msgs::msg::Network_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wireless_msgs

#endif  // WIRELESS_MSGS__MSG__DETAIL__NETWORK__STRUCT_HPP_
