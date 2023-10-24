// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wireless_msgs:msg/Quality.idl
// generated code does not contain a copyright notice

#ifndef WIRELESS_MSGS__MSG__DETAIL__QUALITY__STRUCT_HPP_
#define WIRELESS_MSGS__MSG__DETAIL__QUALITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__wireless_msgs__msg__Quality __attribute__((deprecated))
#else
# define DEPRECATED__wireless_msgs__msg__Quality __declspec(deprecated)
#endif

namespace wireless_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Quality_
{
  using Type = Quality_<ContainerAllocator>;

  explicit Quality_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->messages_received = 0;
      this->messages_missed = 0;
      this->total_length = 0ul;
      this->latency_avg = 0.0f;
    }
  }

  explicit Quality_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->messages_received = 0;
      this->messages_missed = 0;
      this->total_length = 0ul;
      this->latency_avg = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _messages_received_type =
    uint16_t;
  _messages_received_type messages_received;
  using _messages_missed_type =
    uint16_t;
  _messages_missed_type messages_missed;
  using _total_length_type =
    uint32_t;
  _total_length_type total_length;
  using _message_lengths_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _message_lengths_type message_lengths;
  using _latency_avg_type =
    float;
  _latency_avg_type latency_avg;
  using _latency_measurements_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _latency_measurements_type latency_measurements;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__messages_received(
    const uint16_t & _arg)
  {
    this->messages_received = _arg;
    return *this;
  }
  Type & set__messages_missed(
    const uint16_t & _arg)
  {
    this->messages_missed = _arg;
    return *this;
  }
  Type & set__total_length(
    const uint32_t & _arg)
  {
    this->total_length = _arg;
    return *this;
  }
  Type & set__message_lengths(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->message_lengths = _arg;
    return *this;
  }
  Type & set__latency_avg(
    const float & _arg)
  {
    this->latency_avg = _arg;
    return *this;
  }
  Type & set__latency_measurements(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->latency_measurements = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wireless_msgs::msg::Quality_<ContainerAllocator> *;
  using ConstRawPtr =
    const wireless_msgs::msg::Quality_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wireless_msgs::msg::Quality_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wireless_msgs::msg::Quality_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wireless_msgs::msg::Quality_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wireless_msgs::msg::Quality_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wireless_msgs::msg::Quality_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wireless_msgs::msg::Quality_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wireless_msgs::msg::Quality_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wireless_msgs::msg::Quality_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wireless_msgs__msg__Quality
    std::shared_ptr<wireless_msgs::msg::Quality_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wireless_msgs__msg__Quality
    std::shared_ptr<wireless_msgs::msg::Quality_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Quality_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->messages_received != other.messages_received) {
      return false;
    }
    if (this->messages_missed != other.messages_missed) {
      return false;
    }
    if (this->total_length != other.total_length) {
      return false;
    }
    if (this->message_lengths != other.message_lengths) {
      return false;
    }
    if (this->latency_avg != other.latency_avg) {
      return false;
    }
    if (this->latency_measurements != other.latency_measurements) {
      return false;
    }
    return true;
  }
  bool operator!=(const Quality_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Quality_

// alias to use template instance with default allocator
using Quality =
  wireless_msgs::msg::Quality_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wireless_msgs

#endif  // WIRELESS_MSGS__MSG__DETAIL__QUALITY__STRUCT_HPP_
