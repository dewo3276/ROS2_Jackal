// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wireless_msgs:msg/Connection.idl
// generated code does not contain a copyright notice

#ifndef WIRELESS_MSGS__MSG__DETAIL__CONNECTION__TRAITS_HPP_
#define WIRELESS_MSGS__MSG__DETAIL__CONNECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wireless_msgs/msg/detail/connection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wireless_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Connection & msg,
  std::ostream & out)
{
  out << "{";
  // member: bitrate
  {
    out << "bitrate: ";
    rosidl_generator_traits::value_to_yaml(msg.bitrate, out);
    out << ", ";
  }

  // member: txpower
  {
    out << "txpower: ";
    rosidl_generator_traits::value_to_yaml(msg.txpower, out);
    out << ", ";
  }

  // member: link_quality_raw
  {
    out << "link_quality_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.link_quality_raw, out);
    out << ", ";
  }

  // member: link_quality
  {
    out << "link_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.link_quality, out);
    out << ", ";
  }

  // member: signal_level
  {
    out << "signal_level: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_level, out);
    out << ", ";
  }

  // member: noise_level
  {
    out << "noise_level: ";
    rosidl_generator_traits::value_to_yaml(msg.noise_level, out);
    out << ", ";
  }

  // member: essid
  {
    out << "essid: ";
    rosidl_generator_traits::value_to_yaml(msg.essid, out);
    out << ", ";
  }

  // member: bssid
  {
    out << "bssid: ";
    rosidl_generator_traits::value_to_yaml(msg.bssid, out);
    out << ", ";
  }

  // member: frequency
  {
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Connection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bitrate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bitrate: ";
    rosidl_generator_traits::value_to_yaml(msg.bitrate, out);
    out << "\n";
  }

  // member: txpower
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "txpower: ";
    rosidl_generator_traits::value_to_yaml(msg.txpower, out);
    out << "\n";
  }

  // member: link_quality_raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_quality_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.link_quality_raw, out);
    out << "\n";
  }

  // member: link_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.link_quality, out);
    out << "\n";
  }

  // member: signal_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal_level: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_level, out);
    out << "\n";
  }

  // member: noise_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "noise_level: ";
    rosidl_generator_traits::value_to_yaml(msg.noise_level, out);
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

  // member: bssid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bssid: ";
    rosidl_generator_traits::value_to_yaml(msg.bssid, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Connection & msg, bool use_flow_style = false)
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
  const wireless_msgs::msg::Connection & msg,
  std::ostream & out, size_t indentation = 0)
{
  wireless_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wireless_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wireless_msgs::msg::Connection & msg)
{
  return wireless_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wireless_msgs::msg::Connection>()
{
  return "wireless_msgs::msg::Connection";
}

template<>
inline const char * name<wireless_msgs::msg::Connection>()
{
  return "wireless_msgs/msg/Connection";
}

template<>
struct has_fixed_size<wireless_msgs::msg::Connection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wireless_msgs::msg::Connection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wireless_msgs::msg::Connection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WIRELESS_MSGS__MSG__DETAIL__CONNECTION__TRAITS_HPP_
