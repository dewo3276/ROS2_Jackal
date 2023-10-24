// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wireless_msgs:msg/Quality.idl
// generated code does not contain a copyright notice

#ifndef WIRELESS_MSGS__MSG__DETAIL__QUALITY__BUILDER_HPP_
#define WIRELESS_MSGS__MSG__DETAIL__QUALITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wireless_msgs/msg/detail/quality__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wireless_msgs
{

namespace msg
{

namespace builder
{

class Init_Quality_latency_measurements
{
public:
  explicit Init_Quality_latency_measurements(::wireless_msgs::msg::Quality & msg)
  : msg_(msg)
  {}
  ::wireless_msgs::msg::Quality latency_measurements(::wireless_msgs::msg::Quality::_latency_measurements_type arg)
  {
    msg_.latency_measurements = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wireless_msgs::msg::Quality msg_;
};

class Init_Quality_latency_avg
{
public:
  explicit Init_Quality_latency_avg(::wireless_msgs::msg::Quality & msg)
  : msg_(msg)
  {}
  Init_Quality_latency_measurements latency_avg(::wireless_msgs::msg::Quality::_latency_avg_type arg)
  {
    msg_.latency_avg = std::move(arg);
    return Init_Quality_latency_measurements(msg_);
  }

private:
  ::wireless_msgs::msg::Quality msg_;
};

class Init_Quality_message_lengths
{
public:
  explicit Init_Quality_message_lengths(::wireless_msgs::msg::Quality & msg)
  : msg_(msg)
  {}
  Init_Quality_latency_avg message_lengths(::wireless_msgs::msg::Quality::_message_lengths_type arg)
  {
    msg_.message_lengths = std::move(arg);
    return Init_Quality_latency_avg(msg_);
  }

private:
  ::wireless_msgs::msg::Quality msg_;
};

class Init_Quality_total_length
{
public:
  explicit Init_Quality_total_length(::wireless_msgs::msg::Quality & msg)
  : msg_(msg)
  {}
  Init_Quality_message_lengths total_length(::wireless_msgs::msg::Quality::_total_length_type arg)
  {
    msg_.total_length = std::move(arg);
    return Init_Quality_message_lengths(msg_);
  }

private:
  ::wireless_msgs::msg::Quality msg_;
};

class Init_Quality_messages_missed
{
public:
  explicit Init_Quality_messages_missed(::wireless_msgs::msg::Quality & msg)
  : msg_(msg)
  {}
  Init_Quality_total_length messages_missed(::wireless_msgs::msg::Quality::_messages_missed_type arg)
  {
    msg_.messages_missed = std::move(arg);
    return Init_Quality_total_length(msg_);
  }

private:
  ::wireless_msgs::msg::Quality msg_;
};

class Init_Quality_messages_received
{
public:
  explicit Init_Quality_messages_received(::wireless_msgs::msg::Quality & msg)
  : msg_(msg)
  {}
  Init_Quality_messages_missed messages_received(::wireless_msgs::msg::Quality::_messages_received_type arg)
  {
    msg_.messages_received = std::move(arg);
    return Init_Quality_messages_missed(msg_);
  }

private:
  ::wireless_msgs::msg::Quality msg_;
};

class Init_Quality_header
{
public:
  Init_Quality_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Quality_messages_received header(::wireless_msgs::msg::Quality::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Quality_messages_received(msg_);
  }

private:
  ::wireless_msgs::msg::Quality msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wireless_msgs::msg::Quality>()
{
  return wireless_msgs::msg::builder::Init_Quality_header();
}

}  // namespace wireless_msgs

#endif  // WIRELESS_MSGS__MSG__DETAIL__QUALITY__BUILDER_HPP_
