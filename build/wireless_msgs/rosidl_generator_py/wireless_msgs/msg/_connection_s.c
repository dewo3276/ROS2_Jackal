// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from wireless_msgs:msg/Connection.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "wireless_msgs/msg/detail/connection__struct.h"
#include "wireless_msgs/msg/detail/connection__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool wireless_msgs__msg__connection__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("wireless_msgs.msg._connection.Connection", full_classname_dest, 40) == 0);
  }
  wireless_msgs__msg__Connection * ros_message = _ros_message;
  {  // bitrate
    PyObject * field = PyObject_GetAttrString(_pymsg, "bitrate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bitrate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // txpower
    PyObject * field = PyObject_GetAttrString(_pymsg, "txpower");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->txpower = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // link_quality_raw
    PyObject * field = PyObject_GetAttrString(_pymsg, "link_quality_raw");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->link_quality_raw, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // link_quality
    PyObject * field = PyObject_GetAttrString(_pymsg, "link_quality");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->link_quality = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // signal_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "signal_level");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->signal_level = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // noise_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "noise_level");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->noise_level = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // essid
    PyObject * field = PyObject_GetAttrString(_pymsg, "essid");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->essid, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // bssid
    PyObject * field = PyObject_GetAttrString(_pymsg, "bssid");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->bssid, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // frequency
    PyObject * field = PyObject_GetAttrString(_pymsg, "frequency");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->frequency = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * wireless_msgs__msg__connection__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Connection */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("wireless_msgs.msg._connection");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Connection");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  wireless_msgs__msg__Connection * ros_message = (wireless_msgs__msg__Connection *)raw_ros_message;
  {  // bitrate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bitrate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bitrate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // txpower
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->txpower);
    {
      int rc = PyObject_SetAttrString(_pymessage, "txpower", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // link_quality_raw
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->link_quality_raw.data,
      strlen(ros_message->link_quality_raw.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "link_quality_raw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // link_quality
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->link_quality);
    {
      int rc = PyObject_SetAttrString(_pymessage, "link_quality", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // signal_level
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->signal_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "signal_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // noise_level
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->noise_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "noise_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // essid
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->essid.data,
      strlen(ros_message->essid.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "essid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bssid
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->bssid.data,
      strlen(ros_message->bssid.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bssid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frequency
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->frequency);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frequency", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
