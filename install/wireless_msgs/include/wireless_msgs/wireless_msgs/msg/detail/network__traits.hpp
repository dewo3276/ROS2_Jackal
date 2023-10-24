// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wireless_msgs:msg/Network.idl
// generated code does not contain a copyright notice

#ifndef WIRELESS_MSGS__MSG__DETAIL__NETWORK__TRAITS_HPP_
#define WIRELESS_MSGS__MSG__DETAIL__NETWORK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wireless_msgs/msg/detail/network__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wireless_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Network & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: essid
  {
    out << "essid: ";
    rosidl_generator_traits::value_to_yaml(msg.essid, out);
    out << ", ";
  }

  // member: mac
  {
    out << "mac: ";
    rosidl_generator_traits::value_to_yaml(msg.mac, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: frequency
  {
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
    out << ", ";
  }

  // member: encryption
  {
    out << "encryption: ";
    rosidl_generator_traits::value_to_yaml(msg.encryption, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Network & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: essid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "essid: ";
    rosidl_generator_traits::value_to_yaml(msg.essid, out);
    out << "\n";
  }

  // member: mac
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mac: ";
    rosidl_generator_traits::value_to_yaml(msg.mac, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
    out << "\n";
  }

  // member: encryption
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "encryption: ";
    rosidl_generator_traits::value_to_yaml(msg.encryption, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Network & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace wireless_msgs

namespace rosidl_generator_traits
{

[[deprecated("use wireless_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wireless_msgs::msg::Network & msg,
  std::ostream & out, size_t indentation = 0)
{
  wireless_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wireless_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wireless_msgs::msg::Network & msg)
{
  return wireless_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wireless_msgs::msg::Network>()
{
  return "wireless_msgs::msg::Network";
}

template<>
inline const char * name<wireless_msgs::msg::Network>()
{
  return "wireless_msgs/msg/Network";
}

template<>
struct has_fixed_size<wireless_msgs::msg::Network>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wireless_msgs::msg::Network>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wireless_msgs::msg::Network>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WIRELESS_MSGS__MSG__DETAIL__NETWORK__TRAITS_HPP_
