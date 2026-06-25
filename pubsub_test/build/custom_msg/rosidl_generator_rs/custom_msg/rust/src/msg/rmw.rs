#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "custom_msg__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_msg__msg__Stryng() -> *const std::ffi::c_void;
}

#[link(name = "custom_msg__rosidl_generator_c")]
extern "C" {
    fn custom_msg__msg__Stryng__init(msg: *mut Stryng) -> bool;
    fn custom_msg__msg__Stryng__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Stryng>, size: usize) -> bool;
    fn custom_msg__msg__Stryng__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Stryng>);
    fn custom_msg__msg__Stryng__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Stryng>, out_seq: *mut rosidl_runtime_rs::Sequence<Stryng>) -> bool;
}

// Corresponds to custom_msg__msg__Stryng
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Stryng {

    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for Stryng {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_msg__msg__Stryng__init(&mut msg as *mut _) {
        panic!("Call to custom_msg__msg__Stryng__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Stryng {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msg__msg__Stryng__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msg__msg__Stryng__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msg__msg__Stryng__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Stryng {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Stryng where Self: Sized {
  const TYPE_NAME: &'static str = "custom_msg/msg/Stryng";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_msg__msg__Stryng() }
  }
}


