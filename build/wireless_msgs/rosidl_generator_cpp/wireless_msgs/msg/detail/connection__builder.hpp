// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wireless_msgs:msg/Connection.idl
// generated code does not contain a copyright notice

#ifndef WIRELESS_MSGS__MSG__DETAIL__CONNECTION__BUILDER_HPP_
#define WIRELESS_MSGS__MSG__DETAIL__CONNECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wireless_msgs/msg/detail/connection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wireless_msgs
{

namespace msg
{

namespace builder
{

class Init_Connection_frequency
{
public:
  explicit Init_Connection_frequency(::wireless_msgs::msg::Connection & msg)
  : msg_(msg)
  {}
  ::wireless_msgs::msg::Connection frequency(::wireless_msgs::msg::Connection::_frequency_type arg)
  {
    msg_.frequency = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wireless_msgs::msg::Connection msg_;
};

class Init_Connection_bssid
{
public:
  explicit Init_Connection_bssid(::wireless_msgs::msg::Connection & msg)
  : msg_(msg)
  {}
  Init_Connection_frequency bssid(::wireless_msgs::msg::Connection::_bssid_type arg)
  {
    msg_.bssid = std::move(arg);
    return Init_Connection_frequency(msg_);
  }

private:
  ::wireless_msgs::msg::Connection msg_;
};

class Init_Connection_essid
{
public:
  explicit Init_Connection_essid(::wireless_msgs::msg::Connection & msg)
  : msg_(msg)
  {}
  Init_Connection_bssid essid(::wireless_msgs::msg::Connection::_essid_type arg)
  {
    msg_.essid = std::move(arg);
    return Init_Connection_bssid(msg_);
  }

private:
  ::wireless_msgs::msg::Connection msg_;
};

class Init_Connection_noise_level
{
public:
  explicit Init_Connection_noise_level(::wireless_msgs::msg::Connection & msg)
  : msg_(msg)
  {}
  Init_Connection_essid noise_level(::wireless_msgs::msg::Connection::_noise_level_type arg)
  {
    msg_.noise_level = std::move(arg);
    return Init_Connection_essid(msg_);
  }

private:
  ::wireless_msgs::msg::Connection msg_;
};

class Init_Connection_signal_level
{
public:
  explicit Init_Connection_signal_level(::wireless_msgs::msg::Connection & msg)
  : msg_(msg)
  {}
  Init_Connection_noise_level signal_level(::wireless_msgs::msg::Connection::_signal_level_type arg)
  {
    msg_.signal_level = std::move(arg);
    return Init_Connection_noise_level(msg_);
  }

private:
  ::wireless_msgs::msg::Connection msg_;
};

class Init_Connection_link_quality
{
public:
  explicit Init_Connection_link_quality(::wireless_msgs::msg::Connection & msg)
  : msg_(msg)
  {}
  Init_Connection_signal_level link_quality(::wireless_msgs::msg::Connection::_link_quality_type arg)
  {
    msg_.link_quality = std::move(arg);
    return Init_Connection_signal_level(msg_);
  }

private:
  ::wireless_msgs::msg::Connection msg_;
};

class Init_Connection_link_quality_raw
{
public:
  explicit Init_Connection_link_quality_raw(::wireless_msgs::msg::Connection & msg)
  : msg_(msg)
  {}
  Init_Connection_link_quality link_quality_raw(::wireless_msgs::msg::Connection::_link_quality_raw_type arg)
  {
    msg_.link_quality_raw = std::move(arg);
    return Init_Connection_link_quality(msg_);
  }

private:
  ::wireless_msgs::msg::Connection msg_;
};

class Init_Connection_txpower
{
public:
  explicit Init_Connection_txpower(::wireless_msgs::msg::Connection & msg)
  : msg_(msg)
  {}
  Init_Connection_link_quality_raw txpower(::wireless_msgs::msg::Connection::_txpower_type arg)
  {
    msg_.txpower = std::move(arg);
    return Init_Connection_link_quality_raw(msg_);
  }

private:
  ::wireless_msgs::msg::Connection msg_;
};

class Init_Connection_bitrate
{
public:
  Init_Connection_bitrate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Connection_txpower bitrate(::wireless_msgs::msg::Connection::_bitrate_type arg)
  {
    msg_.bitrate = std::move(arg);
    return Init_Connection_txpower(msg_);
  }

private:
  ::wireless_msgs::msg::Connection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wireless_msgs::msg::Connection>()
{
  return wireless_msgs::msg::builder::Init_Connection_bitrate();
}

}  // namespace wireless_msgs

#endif  // WIRELESS_MSGS__MSG__DETAIL__CONNECTION__BUILDER_HPP_
