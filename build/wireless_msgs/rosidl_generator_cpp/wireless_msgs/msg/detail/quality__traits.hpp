// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wireless_msgs:msg/Quality.idl
// generated code does not contain a copyright notice

#ifndef WIRELESS_MSGS__MSG__DETAIL__QUALITY__TRAITS_HPP_
#define WIRELESS_MSGS__MSG__DETAIL__QUALITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wireless_msgs/msg/detail/quality__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace wireless_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Quality & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: messages_received
  {
    out << "messages_received: ";
    rosidl_generator_traits::value_to_yaml(msg.messages_received, out);
    out << ", ";
  }

  // member: messages_missed
  {
    out << "messages_missed: ";
    rosidl_generator_traits::value_to_yaml(msg.messages_missed, out);
    out << ", ";
  }

  // member: total_length
  {
    out << "total_length: ";
    rosidl_generator_traits::value_to_yaml(msg.total_length, out);
    out << ", ";
  }

  // member: message_lengths
  {
    if (msg.message_lengths.size() == 0) {
      out << "message_lengths: []";
    } else {
      out << "message_lengths: [";
      size_t pending_items = msg.message_lengths.size();
      for (auto item : msg.message_lengths) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: latency_avg
  {
    out << "latency_avg: ";
    rosidl_generator_traits::value_to_yaml(msg.latency_avg, out);
    out << ", ";
  }

  // member: latency_measurements
  {
    if (msg.latency_measurements.size() == 0) {
      out << "latency_measurements: []";
    } else {
      out << "latency_measurements: [";
      size_t pending_items = msg.latency_measurements.size();
      for (auto item : msg.latency_measurements) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Quality & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: messages_received
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "messages_received: ";
    rosidl_generator_traits::value_to_yaml(msg.messages_received, out);
    out << "\n";
  }

  // member: messages_missed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "messages_missed: ";
    rosidl_generator_traits::value_to_yaml(msg.messages_missed, out);
    out << "\n";
  }

  // member: total_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_length: ";
    rosidl_generator_traits::value_to_yaml(msg.total_length, out);
    out << "\n";
  }

  // member: message_lengths
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.message_lengths.size() == 0) {
      out << "message_lengths: []\n";
    } else {
      out << "message_lengths:\n";
      for (auto item : msg.message_lengths) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: latency_avg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latency_avg: ";
    rosidl_generator_traits::value_to_yaml(msg.latency_avg, out);
    out << "\n";
  }

  // member: latency_measurements
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.latency_measurements.size() == 0) {
      out << "latency_measurements: []\n";
    } else {
      out << "latency_measurements:\n";
      for (auto item : msg.latency_measurements) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Quality & msg, bool use_flow_style = false)
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
  const wireless_msgs::msg::Quality & msg,
  std::ostream & out, size_t indentation = 0)
{
  wireless_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wireless_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wireless_msgs::msg::Quality & msg)
{
  return wireless_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wireless_msgs::msg::Quality>()
{
  return "wireless_msgs::msg::Quality";
}

template<>
inline const char * name<wireless_msgs::msg::Quality>()
{
  return "wireless_msgs/msg/Quality";
}

template<>
struct has_fixed_size<wireless_msgs::msg::Quality>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wireless_msgs::msg::Quality>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wireless_msgs::msg::Quality>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WIRELESS_MSGS__MSG__DETAIL__QUALITY__TRAITS_HPP_
