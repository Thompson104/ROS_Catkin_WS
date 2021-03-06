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
 * Auto-generated by genmsg_cpp from file /home/longfei/catkin_ws/src/youbot/youbot_msgs/msg/UpdateDependency.msg
 *
 */


#ifndef YOUBOT_MSGS_MESSAGE_UPDATEDEPENDENCY_H
#define YOUBOT_MSGS_MESSAGE_UPDATEDEPENDENCY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace youbot_msgs
{
template <class ContainerAllocator>
struct UpdateDependency_
{
  typedef UpdateDependency_<ContainerAllocator> Type;

  UpdateDependency_()
    : name()
    , status(false)  {
    }
  UpdateDependency_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , status(false)  {
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef uint8_t _status_type;
  _status_type status;




  typedef boost::shared_ptr< ::youbot_msgs::UpdateDependency_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::youbot_msgs::UpdateDependency_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct UpdateDependency_

typedef ::youbot_msgs::UpdateDependency_<std::allocator<void> > UpdateDependency;

typedef boost::shared_ptr< ::youbot_msgs::UpdateDependency > UpdateDependencyPtr;
typedef boost::shared_ptr< ::youbot_msgs::UpdateDependency const> UpdateDependencyConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::youbot_msgs::UpdateDependency_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::youbot_msgs::UpdateDependency_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace youbot_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'youbot_msgs': ['/home/longfei/catkin_ws/src/youbot/youbot_msgs/msg'], 'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::youbot_msgs::UpdateDependency_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::youbot_msgs::UpdateDependency_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::youbot_msgs::UpdateDependency_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::youbot_msgs::UpdateDependency_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::youbot_msgs::UpdateDependency_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::youbot_msgs::UpdateDependency_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::youbot_msgs::UpdateDependency_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1b984ddd6d6825cc021e2e5586d5252b";
  }

  static const char* value(const ::youbot_msgs::UpdateDependency_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1b984ddd6d6825ccULL;
  static const uint64_t static_value2 = 0x021e2e5586d5252bULL;
};

template<class ContainerAllocator>
struct DataType< ::youbot_msgs::UpdateDependency_<ContainerAllocator> >
{
  static const char* value()
  {
    return "youbot_msgs/UpdateDependency";
  }

  static const char* value(const ::youbot_msgs::UpdateDependency_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::youbot_msgs::UpdateDependency_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n\
bool status\n\
";
  }

  static const char* value(const ::youbot_msgs::UpdateDependency_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::youbot_msgs::UpdateDependency_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct UpdateDependency_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::youbot_msgs::UpdateDependency_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::youbot_msgs::UpdateDependency_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // YOUBOT_MSGS_MESSAGE_UPDATEDEPENDENCY_H
