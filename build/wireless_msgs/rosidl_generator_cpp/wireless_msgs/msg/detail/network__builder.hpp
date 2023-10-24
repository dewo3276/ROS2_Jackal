// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wireless_msgs:msg/Network.idl
// generated code does not contain a copyright notice

#ifndef WIRELESS_MSGS__MSG__DETAIL__NETWORK__BUILDER_HPP_
#define WIRELESS_MSGS__MSG__DETAIL__NETWORK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wireless_msgs/msg/detail/network__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wireless_msgs
{

namespace msg
{

namespace builder
{

class Init_Network_encryption
{
public:
  explicit Init_Network_encryption(::wireless_msgs::msg::Network & msg)
  : msg_(msg)
  {}
  ::wireless_msgs::msg::Network encryption(::wireless_msgs::msg::Network::_encryption_type arg)
  {
    msg_.encryption = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wireless_msgs::msg::Network msg_;
};

class Init_Network_frequency
{
public:
  explicit Init_Network_frequency(::wireless_msgs::msg::Network & msg)
  : msg_(msg)
  {}
  Init_Network_encryption frequency(::wireless_msgs::msg::Network::_frequency_type arg)
  {
    msg_.frequency = std::move(arg);
    return Init_Network_encryption(msg_);
  }

private:
  ::wireless_msgs::msg::Network msg_;
};

class Init_Network_mode
{
public:
  explicit Init_Network_mode(::wireless_msgs::msg::Network & msg)
  : msg_(msg)
  {}
  Init_Network_frequency mode(::wireless_msgs::msg::Network::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_Network_frequency(msg_);
  }

private:
  ::wireless_msgs::msg::Network msg_;
};

class Init_Network_mac
{
public:
  explicit Init_Network_mac(::wireless_msgs::msg::Network & msg)
  : msg_(msg)
  {}
  Init_Network_mode mac(::wireless_msgs::msg::Network::_mac_type arg)
  {
    msg_.mac = std::move(arg);
    return Init_Network_mode(msg_);
  }

private:
  ::wireless_msgs::msg::Network msg_;
};

class Init_Network_essid
{
public:
  explicit Init_Network_essid(::wireless_msgs::msg::Network & msg)
  : msg_(msg)
  {}
  Init_Network_mac essid(::wireless_msgs::msg::Network::_essid_type arg)
  {
    msg_.essid = std::move(arg);
    return Init_Network_mac(msg_);
  }

private:
  ::wireless_msgs::msg::Network msg_;
};

class Init_Network_type
{
public:
  Init_Network_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Network_essid type(::wireless_msgs::msg::Network::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Network_essid(msg_);
  }

private:
  ::wireless_msgs::msg::Network msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wireless_msgs::msg::Network>()
{
  return wireless_msgs::msg::builder::Init_Network_type();
}

}  // namespace wireless_msgs

#endif  // WIRELESS_MSGS__MSG__DETAIL__NETWORK__BUILDER_HPP_
