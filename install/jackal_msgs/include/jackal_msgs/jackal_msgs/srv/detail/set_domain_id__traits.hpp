// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from jackal_msgs:srv/SetDomainId.idl
// generated code does not contain a copyright notice

#ifndef JACKAL_MSGS__SRV__DETAIL__SET_DOMAIN_ID__TRAITS_HPP_
#define JACKAL_MSGS__SRV__DETAIL__SET_DOMAIN_ID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "jackal_msgs/srv/detail/set_domain_id__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace jackal_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetDomainId_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: domain_id
  {
    out << "domain_id: ";
    rosidl_generator_traits::value_to_yaml(msg.domain_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetDomainId_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: domain_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "domain_id: ";
    rosidl_generator_traits::value_to_yaml(msg.domain_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetDomainId_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace jackal_msgs

namespace rosidl_generator_traits
{

[[deprecated("use jackal_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const jackal_msgs::srv::SetDomainId_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  jackal_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use jackal_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const jackal_msgs::srv::SetDomainId_Request & msg)
{
  return jackal_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<jackal_msgs::srv::SetDomainId_Request>()
{
  return "jackal_msgs::srv::SetDomainId_Request";
}

template<>
inline const char * name<jackal_msgs::srv::SetDomainId_Request>()
{
  return "jackal_msgs/srv/SetDomainId_Request";
}

template<>
struct has_fixed_size<jackal_msgs::srv::SetDomainId_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<jackal_msgs::srv::SetDomainId_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<jackal_msgs::srv::SetDomainId_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace jackal_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetDomainId_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetDomainId_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetDomainId_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace jackal_msgs

namespace rosidl_generator_traits
{

[[deprecated("use jackal_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const jackal_msgs::srv::SetDomainId_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  jackal_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use jackal_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const jackal_msgs::srv::SetDomainId_Response & msg)
{
  return jackal_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<jackal_msgs::srv::SetDomainId_Response>()
{
  return "jackal_msgs::srv::SetDomainId_Response";
}

template<>
inline const char * name<jackal_msgs::srv::SetDomainId_Response>()
{
  return "jackal_msgs/srv/SetDomainId_Response";
}

template<>
struct has_fixed_size<jackal_msgs::srv::SetDomainId_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<jackal_msgs::srv::SetDomainId_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<jackal_msgs::srv::SetDomainId_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<jackal_msgs::srv::SetDomainId>()
{
  return "jackal_msgs::srv::SetDomainId";
}

template<>
inline const char * name<jackal_msgs::srv::SetDomainId>()
{
  return "jackal_msgs/srv/SetDomainId";
}

template<>
struct has_fixed_size<jackal_msgs::srv::SetDomainId>
  : std::integral_constant<
    bool,
    has_fixed_size<jackal_msgs::srv::SetDomainId_Request>::value &&
    has_fixed_size<jackal_msgs::srv::SetDomainId_Response>::value
  >
{
};

template<>
struct has_bounded_size<jackal_msgs::srv::SetDomainId>
  : std::integral_constant<
    bool,
    has_bounded_size<jackal_msgs::srv::SetDomainId_Request>::value &&
    has_bounded_size<jackal_msgs::srv::SetDomainId_Response>::value
  >
{
};

template<>
struct is_service<jackal_msgs::srv::SetDomainId>
  : std::true_type
{
};

template<>
struct is_service_request<jackal_msgs::srv::SetDomainId_Request>
  : std::true_type
{
};

template<>
struct is_service_response<jackal_msgs::srv::SetDomainId_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // JACKAL_MSGS__SRV__DETAIL__SET_DOMAIN_ID__TRAITS_HPP_
