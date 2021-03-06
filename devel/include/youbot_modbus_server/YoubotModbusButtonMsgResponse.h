/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/longfei/catkin_ws/src/youbot/youbot_modbus_server/srv/YoubotModbusButtonMsg.srv
 *
 */


#ifndef YOUBOT_MODBUS_SERVER_MESSAGE_YOUBOTMODBUSBUTTONMSGRESPONSE_H
#define YOUBOT_MODBUS_SERVER_MESSAGE_YOUBOTMODBUSBUTTONMSGRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace youbot_modbus_server
{
template <class ContainerAllocator>
struct YoubotModbusButtonMsgResponse_
{
  typedef YoubotModbusButtonMsgResponse_<ContainerAllocator> Type;

  YoubotModbusButtonMsgResponse_()
    : header()
    , data_validity(false)
    , estop_button_status(0)
    , estop_indicator_status(0)
    , yellow_button_status(0)
    , yellow_indicator_status(0)
    , green_button_status(0)
    , green_indicator_status(0)
    , runstop_switch_status(0)
    , runstop_indicator_status(0)
    , supervisor_runstop_status(0)  {
    }
  YoubotModbusButtonMsgResponse_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , data_validity(false)
    , estop_button_status(0)
    , estop_indicator_status(0)
    , yellow_button_status(0)
    , yellow_indicator_status(0)
    , green_button_status(0)
    , green_indicator_status(0)
    , runstop_switch_status(0)
    , runstop_indicator_status(0)
    , supervisor_runstop_status(0)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _data_validity_type;
  _data_validity_type data_validity;

   typedef int8_t _estop_button_status_type;
  _estop_button_status_type estop_button_status;

   typedef int8_t _estop_indicator_status_type;
  _estop_indicator_status_type estop_indicator_status;

   typedef int8_t _yellow_button_status_type;
  _yellow_button_status_type yellow_button_status;

   typedef int8_t _yellow_indicator_status_type;
  _yellow_indicator_status_type yellow_indicator_status;

   typedef int8_t _green_button_status_type;
  _green_button_status_type green_button_status;

   typedef int8_t _green_indicator_status_type;
  _green_indicator_status_type green_indicator_status;

   typedef int8_t _runstop_switch_status_type;
  _runstop_switch_status_type runstop_switch_status;

   typedef int8_t _runstop_indicator_status_type;
  _runstop_indicator_status_type runstop_indicator_status;

   typedef int8_t _supervisor_runstop_status_type;
  _supervisor_runstop_status_type supervisor_runstop_status;




  typedef boost::shared_ptr< ::youbot_modbus_server::YoubotModbusButtonMsgResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::youbot_modbus_server::YoubotModbusButtonMsgResponse_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct YoubotModbusButtonMsgResponse_

typedef ::youbot_modbus_server::YoubotModbusButtonMsgResponse_<std::allocator<void> > YoubotModbusButtonMsgResponse;

typedef boost::shared_ptr< ::youbot_modbus_server::YoubotModbusButtonMsgResponse > YoubotModbusButtonMsgResponsePtr;
typedef boost::shared_ptr< ::youbot_modbus_server::YoubotModbusButtonMsgResponse const> YoubotModbusButtonMsgResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::youbot_modbus_server::YoubotModbusButtonMsgResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::youbot_modbus_server::YoubotModbusButtonMsgResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace youbot_modbus_server

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::youbot_modbus_server::YoubotModbusButtonMsgResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::youbot_modbus_server::YoubotModbusButtonMsgResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::youbot_modbus_server::YoubotModbusButtonMsgResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::youbot_modbus_server::YoubotModbusButtonMsgResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::youbot_modbus_server::YoubotModbusButtonMsgResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::youbot_modbus_server::YoubotModbusButtonMsgResponse_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::youbot_modbus_server::YoubotModbusButtonMsgResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "058e4e1f41e0033a817be53009922805";
  }

  static const char* value(const ::youbot_modbus_server::YoubotModbusButtonMsgResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x058e4e1f41e0033aULL;
  static const uint64_t static_value2 = 0x817be53009922805ULL;
};

template<class ContainerAllocator>
struct DataType< ::youbot_modbus_server::YoubotModbusButtonMsgResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "youbot_modbus_server/YoubotModbusButtonMsgResponse";
  }

  static const char* value(const ::youbot_modbus_server::YoubotModbusButtonMsgResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::youbot_modbus_server::YoubotModbusButtonMsgResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
bool data_validity\n\
int8 estop_button_status\n\
int8 estop_indicator_status\n\
int8 yellow_button_status\n\
int8 yellow_indicator_status\n\
int8 green_button_status\n\
int8 green_indicator_status\n\
int8 runstop_switch_status\n\
int8 runstop_indicator_status\n\
int8 supervisor_runstop_status\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::youbot_modbus_server::YoubotModbusButtonMsgResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::youbot_modbus_server::YoubotModbusButtonMsgResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.data_validity);
      stream.next(m.estop_button_status);
      stream.next(m.estop_indicator_status);
      stream.next(m.yellow_button_status);
      stream.next(m.yellow_indicator_status);
      stream.next(m.green_button_status);
      stream.next(m.green_indicator_status);
      stream.next(m.runstop_switch_status);
      stream.next(m.runstop_indicator_status);
      stream.next(m.supervisor_runstop_status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct YoubotModbusButtonMsgResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::youbot_modbus_server::YoubotModbusButtonMsgResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::youbot_modbus_server::YoubotModbusButtonMsgResponse_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "data_validity: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.data_validity);
    s << indent << "estop_button_status: ";
    Printer<int8_t>::stream(s, indent + "  ", v.estop_button_status);
    s << indent << "estop_indicator_status: ";
    Printer<int8_t>::stream(s, indent + "  ", v.estop_indicator_status);
    s << indent << "yellow_button_status: ";
    Printer<int8_t>::stream(s, indent + "  ", v.yellow_button_status);
    s << indent << "yellow_indicator_status: ";
    Printer<int8_t>::stream(s, indent + "  ", v.yellow_indicator_status);
    s << indent << "green_button_status: ";
    Printer<int8_t>::stream(s, indent + "  ", v.green_button_status);
    s << indent << "green_indicator_status: ";
    Printer<int8_t>::stream(s, indent + "  ", v.green_indicator_status);
    s << indent << "runstop_switch_status: ";
    Printer<int8_t>::stream(s, indent + "  ", v.runstop_switch_status);
    s << indent << "runstop_indicator_status: ";
    Printer<int8_t>::stream(s, indent + "  ", v.runstop_indicator_status);
    s << indent << "supervisor_runstop_status: ";
    Printer<int8_t>::stream(s, indent + "  ", v.supervisor_runstop_status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // YOUBOT_MODBUS_SERVER_MESSAGE_YOUBOTMODBUSBUTTONMSGRESPONSE_H
