// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msg:msg/Stryng.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG__MSG__DETAIL__STRYNG__BUILDER_HPP_
#define CUSTOM_MSG__MSG__DETAIL__STRYNG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msg/msg/detail/stryng__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msg
{

namespace msg
{

namespace builder
{

class Init_Stryng_message
{
public:
  Init_Stryng_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msg::msg::Stryng message(::custom_msg::msg::Stryng::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msg::msg::Stryng msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msg::msg::Stryng>()
{
  return custom_msg::msg::builder::Init_Stryng_message();
}

}  // namespace custom_msg

#endif  // CUSTOM_MSG__MSG__DETAIL__STRYNG__BUILDER_HPP_
