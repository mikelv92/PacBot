/* Auto-generated by genmsg_cpp for file /home/mikel/workspace/ros/PacBot/PacBot/Echoes/msg/Sonar.msg */
#ifndef ECHOES_MESSAGE_SONAR_H
#define ECHOES_MESSAGE_SONAR_H
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
struct Sonar_ {
  typedef Sonar_<ContainerAllocator> Type;

  Sonar_()
  : north(0)
  , south(0)
  , east(0)
  , west(0)
  {
  }

  Sonar_(const ContainerAllocator& _alloc)
  : north(0)
  , south(0)
  , east(0)
  , west(0)
  {
  }

  typedef int32_t _north_type;
  int32_t north;

  typedef int32_t _south_type;
  int32_t south;

  typedef int32_t _east_type;
  int32_t east;

  typedef int32_t _west_type;
  int32_t west;


  typedef boost::shared_ptr< ::Echoes::Sonar_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::Echoes::Sonar_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Sonar
typedef  ::Echoes::Sonar_<std::allocator<void> > Sonar;

typedef boost::shared_ptr< ::Echoes::Sonar> SonarPtr;
typedef boost::shared_ptr< ::Echoes::Sonar const> SonarConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::Echoes::Sonar_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::Echoes::Sonar_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace Echoes

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::Echoes::Sonar_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::Echoes::Sonar_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::Echoes::Sonar_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ae16dc531081c382844920fa0d8562a0";
  }

  static const char* value(const  ::Echoes::Sonar_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xae16dc531081c382ULL;
  static const uint64_t static_value2 = 0x844920fa0d8562a0ULL;
};

template<class ContainerAllocator>
struct DataType< ::Echoes::Sonar_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Echoes/Sonar";
  }

  static const char* value(const  ::Echoes::Sonar_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::Echoes::Sonar_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 north\n\
int32 south\n\
int32 east\n\
int32 west\n\
\n\
";
  }

  static const char* value(const  ::Echoes::Sonar_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::Echoes::Sonar_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::Echoes::Sonar_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.north);
    stream.next(m.south);
    stream.next(m.east);
    stream.next(m.west);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Sonar_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::Echoes::Sonar_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::Echoes::Sonar_<ContainerAllocator> & v) 
  {
    s << indent << "north: ";
    Printer<int32_t>::stream(s, indent + "  ", v.north);
    s << indent << "south: ";
    Printer<int32_t>::stream(s, indent + "  ", v.south);
    s << indent << "east: ";
    Printer<int32_t>::stream(s, indent + "  ", v.east);
    s << indent << "west: ";
    Printer<int32_t>::stream(s, indent + "  ", v.west);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ECHOES_MESSAGE_SONAR_H

