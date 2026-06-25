#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to custom_msg__msg__Stryng

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Stryng {

    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for Stryng {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Stryng::default())
  }
}

impl rosidl_runtime_rs::Message for Stryng {
  type RmwMsg = super::msg::rmw::Stryng;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      message: msg.message.to_string(),
    }
  }
}


