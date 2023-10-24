// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wireless_msgs:msg/Scan.idl
// generated code does not contain a copyright notice

#ifndef WIRELESS_MSGS__MSG__DETAIL__SCAN__BUILDER_HPP_
#define WIRELESS_MSGS__MSG__DETAIL__SCAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wireless_msgs/msg/detail/scan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wireless_msgs
{

namespace msg
{

namespace builder
{

class Init_Scan_networks
{
public:
  Init_Scan_networks()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::wireless_msgs::msg::Scan networks(::wireless_msgs::msg::Scan::_networks_type arg)
  {
    msg_.networks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wireless_msgs::msg::Scan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wireless_msgs::msg::Scan>()
{
  return wireless_msgs::msg::builder::Init_Scan_networks();
}

}  // namespace wireless_msgs

#endif  // WIRELESS_MSGS__MSG__DETAIL__SCAN__BUILDER_HPP_
