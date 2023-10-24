// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wireless_msgs:msg/Connection.idl
// generated code does not contain a copyright notice

#ifndef WIRELESS_MSGS__MSG__DETAIL__CONNECTION__STRUCT_HPP_
#define WIRELESS_MSGS__MSG__DETAIL__CONNECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wireless_msgs__msg__Connection __attribute__((deprecated))
#else
# define DEPRECATED__wireless_msgs__msg__Connection __declspec(deprecated)
#endif

namespace wireless_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Connection_
{
  using Type = Connection_<ContainerAllocator>;

  explicit Connection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bitrate = 0.0f;
      this->txpower = 0;
      this->link_quality_raw = "";
      this->link_quality = 0.0f;
      this->signal_level = 0;
      this->noise_level = 0;
      this->essid = "";
      this->bssid = "";
      this->frequency = 0.0;
    }
  }

  explicit Connection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : link_quality_raw(_alloc),
    essid(_alloc),
    bssid(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bitrate = 0.0f;
      this->txpower = 0;
      this->link_quality_raw = "";
      this->link_quality = 0.0f;
      this->signal_level = 0;
      this->noise_level = 0;
      this->essid = "";
      this->bssid = "";
      this->frequency = 0.0;
    }
  }

  // field types and members
  using _bitrate_type =
    float;
  _bitrate_type bitrate;
  using _txpower_type =
    int16_t;
  _txpower_type txpower;
  using _link_quality_raw_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _link_quality_raw_type link_quality_raw;
  using _link_quality_type =
    float;
  _link_quality_type link_quality;
  using _signal_level_type =
    int16_t;
  _signal_level_type signal_level;
  using _noise_level_type =
    int16_t;
  _noise_level_type noise_level;
  using _essid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _essid_type essid;
  using _bssid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bssid_type bssid;
  using _frequency_type =
    double;
  _frequency_type frequency;

  // setters for named parameter idiom
  Type & set__bitrate(
    const float & _arg)
  {
    this->bitrate = _arg;
    return *this;
  }
  Type & set__txpower(
    const int16_t & _arg)
  {
    this->txpower = _arg;
    return *this;
  }
  Type & set__link_quality_raw(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->link_quality_raw = _arg;
    return *this;
  }
  Type & set__link_quality(
    const float & _arg)
  {
    this->link_quality = _arg;
    return *this;
  }
  Type & set__signal_level(
    const int16_t & _arg)
  {
    this->signal_level = _arg;
    return *this;
  }
  Type & set__noise_level(
    const int16_t & _arg)
  {
    this->noise_level = _arg;
    return *this;
  }
  Type & set__essid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->essid = _arg;
    return *this;
  }
  Type & set__bssid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bssid = _arg;
    return *this;
  }
  Type & set__frequency(
    const double & _arg)
  {
    this->frequency = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wireless_msgs::msg::Connection_<ContainerAllocator> *;
  using ConstRawPtr =
    const wireless_msgs::msg::Connection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wireless_msgs::msg::Connection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wireless_msgs::msg::Connection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wireless_msgs::msg::Connection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wireless_msgs::msg::Connection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wireless_msgs::msg::Connection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wireless_msgs::msg::Connection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wireless_msgs::msg::Connection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wireless_msgs::msg::Connection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wireless_msgs__msg__Connection
    std::shared_ptr<wireless_msgs::msg::Connection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wireless_msgs__msg__Connection
    std::shared_ptr<wireless_msgs::msg::Connection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Connection_ & other) const
  {
    if (this->bitrate != other.bitrate) {
      return false;
    }
    if (this->txpower != other.txpower) {
      return false;
    }
    if (this->link_quality_raw != other.link_quality_raw) {
      return false;
    }
    if (this->link_quality != other.link_quality) {
      return false;
    }
    if (this->signal_level != other.signal_level) {
      return false;
    }
    if (this->noise_level != other.noise_level) {
      return false;
    }
    if (this->essid != other.essid) {
      return false;
    }
    if (this->bssid != other.bssid) {
      return false;
    }
    if (this->frequency != other.frequency) {
      return false;
    }
    return true;
  }
  bool operator!=(const Connection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Connection_

// alias to use template instance with default allocator
using Connection =
  wireless_msgs::msg::Connection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wireless_msgs

#endif  // WIRELESS_MSGS__MSG__DETAIL__CONNECTION__STRUCT_HPP_
