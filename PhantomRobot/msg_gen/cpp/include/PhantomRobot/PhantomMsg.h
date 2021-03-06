/* Auto-generated by genmsg_cpp for file /home/mikel/workspace/ros/PacBot/PhantomRobot/msg/PhantomMsg.msg */
#ifndef PHANTOMROBOT_MESSAGE_PHANTOMMSG_H
#define PHANTOMROBOT_MESSAGE_PHANTOMMSG_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace PhantomRobot
{
template <class ContainerAllocator>
struct PhantomMsg_ {
  typedef PhantomMsg_<ContainerAllocator> Type;

  PhantomMsg_()
  : contact(false)
  {
  }

  PhantomMsg_(const ContainerAllocator& _alloc)
  : contact(false)
  {
  }

  typedef uint8_t _contact_type;
  uint8_t contact;


  typedef boost::shared_ptr< ::PhantomRobot::PhantomMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::PhantomRobot::PhantomMsg_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct PhantomMsg
typedef  ::PhantomRobot::PhantomMsg_<std::allocator<void> > PhantomMsg;

typedef boost::shared_ptr< ::PhantomRobot::PhantomMsg> PhantomMsgPtr;
typedef boost::shared_ptr< ::PhantomRobot::PhantomMsg const> PhantomMsgConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::PhantomRobot::PhantomMsg_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::PhantomRobot::PhantomMsg_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace PhantomRobot

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::PhantomRobot::PhantomMsg_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::PhantomRobot::PhantomMsg_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::PhantomRobot::PhantomMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b2954458cad3c3e08d68421c874a562a";
  }

  static const char* value(const  ::PhantomRobot::PhantomMsg_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb2954458cad3c3e0ULL;
  static const uint64_t static_value2 = 0x8d68421c874a562aULL;
};

template<class ContainerAllocator>
struct DataType< ::PhantomRobot::PhantomMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "PhantomRobot/PhantomMsg";
  }

  static const char* value(const  ::PhantomRobot::PhantomMsg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::PhantomRobot::PhantomMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool contact\n\
\n\
";
  }

  static const char* value(const  ::PhantomRobot::PhantomMsg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::PhantomRobot::PhantomMsg_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::PhantomRobot::PhantomMsg_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.contact);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct PhantomMsg_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::PhantomRobot::PhantomMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::PhantomRobot::PhantomMsg_<ContainerAllocator> & v) 
  {
    s << indent << "contact: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.contact);
  }
};


} // namespace message_operations
} // namespace ros

#endif // PHANTOMROBOT_MESSAGE_PHANTOMMSG_H

