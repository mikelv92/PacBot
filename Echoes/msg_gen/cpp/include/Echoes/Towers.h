/* Auto-generated by genmsg_cpp for file /home/mikel/workspace/ros/PacBot/PacBot/Echoes/msg/Towers.msg */
#ifndef ECHOES_MESSAGE_TOWERS_H
#define ECHOES_MESSAGE_TOWERS_H
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


namespace Echoes
{
template <class ContainerAllocator>
struct Towers_ {
  typedef Towers_<ContainerAllocator> Type;

  Towers_()
  : towerId(0)
  {
  }

  Towers_(const ContainerAllocator& _alloc)
  : towerId(0)
  {
  }

  typedef int8_t _towerId_type;
  int8_t towerId;


  typedef boost::shared_ptr< ::Echoes::Towers_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::Echoes::Towers_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Towers
typedef  ::Echoes::Towers_<std::allocator<void> > Towers;

typedef boost::shared_ptr< ::Echoes::Towers> TowersPtr;
typedef boost::shared_ptr< ::Echoes::Towers const> TowersConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::Echoes::Towers_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::Echoes::Towers_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace Echoes

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::Echoes::Towers_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::Echoes::Towers_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::Echoes::Towers_<ContainerAllocator> > {
  static const char* value() 
  {
    return "43b66313083bb939c0df7c0a570a9ab1";
  }

  static const char* value(const  ::Echoes::Towers_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x43b66313083bb939ULL;
  static const uint64_t static_value2 = 0xc0df7c0a570a9ab1ULL;
};

template<class ContainerAllocator>
struct DataType< ::Echoes::Towers_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Echoes/Towers";
  }

  static const char* value(const  ::Echoes::Towers_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::Echoes::Towers_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int8 towerId\n\
";
  }

  static const char* value(const  ::Echoes::Towers_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::Echoes::Towers_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::Echoes::Towers_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.towerId);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Towers_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::Echoes::Towers_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::Echoes::Towers_<ContainerAllocator> & v) 
  {
    s << indent << "towerId: ";
    Printer<int8_t>::stream(s, indent + "  ", v.towerId);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ECHOES_MESSAGE_TOWERS_H
