/* Auto-generated by genmsg_cpp for file /home/mikel/workspace/ros/PacBot/Echoes/srv/ResetLed.srv */
#ifndef ECHOES_SERVICE_RESETLED_H
#define ECHOES_SERVICE_RESETLED_H
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

#include "ros/service_traits.h"




namespace Echoes
{
template <class ContainerAllocator>
struct ResetLedRequest_ {
  typedef ResetLedRequest_<ContainerAllocator> Type;

  ResetLedRequest_()
  {
  }

  ResetLedRequest_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::Echoes::ResetLedRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::Echoes::ResetLedRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ResetLedRequest
typedef  ::Echoes::ResetLedRequest_<std::allocator<void> > ResetLedRequest;

typedef boost::shared_ptr< ::Echoes::ResetLedRequest> ResetLedRequestPtr;
typedef boost::shared_ptr< ::Echoes::ResetLedRequest const> ResetLedRequestConstPtr;



template <class ContainerAllocator>
struct ResetLedResponse_ {
  typedef ResetLedResponse_<ContainerAllocator> Type;

  ResetLedResponse_()
  : requestSuccessful(false)
  {
  }

  ResetLedResponse_(const ContainerAllocator& _alloc)
  : requestSuccessful(false)
  {
  }

  typedef uint8_t _requestSuccessful_type;
  uint8_t requestSuccessful;


  typedef boost::shared_ptr< ::Echoes::ResetLedResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::Echoes::ResetLedResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ResetLedResponse
typedef  ::Echoes::ResetLedResponse_<std::allocator<void> > ResetLedResponse;

typedef boost::shared_ptr< ::Echoes::ResetLedResponse> ResetLedResponsePtr;
typedef boost::shared_ptr< ::Echoes::ResetLedResponse const> ResetLedResponseConstPtr;


struct ResetLed
{

typedef ResetLedRequest Request;
typedef ResetLedResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct ResetLed
} // namespace Echoes

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::Echoes::ResetLedRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::Echoes::ResetLedRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::Echoes::ResetLedRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::Echoes::ResetLedRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::Echoes::ResetLedRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Echoes/ResetLedRequest";
  }

  static const char* value(const  ::Echoes::ResetLedRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::Echoes::ResetLedRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
";
  }

  static const char* value(const  ::Echoes::ResetLedRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::Echoes::ResetLedRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::Echoes::ResetLedResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::Echoes::ResetLedResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::Echoes::ResetLedResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "6b6d4c3b5d9d236dae096b76debe50d5";
  }

  static const char* value(const  ::Echoes::ResetLedResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x6b6d4c3b5d9d236dULL;
  static const uint64_t static_value2 = 0xae096b76debe50d5ULL;
};

template<class ContainerAllocator>
struct DataType< ::Echoes::ResetLedResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Echoes/ResetLedResponse";
  }

  static const char* value(const  ::Echoes::ResetLedResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::Echoes::ResetLedResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool requestSuccessful\n\
\n\
";
  }

  static const char* value(const  ::Echoes::ResetLedResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::Echoes::ResetLedResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::Echoes::ResetLedRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ResetLedRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::Echoes::ResetLedResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.requestSuccessful);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ResetLedResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<Echoes::ResetLed> {
  static const char* value() 
  {
    return "6b6d4c3b5d9d236dae096b76debe50d5";
  }

  static const char* value(const Echoes::ResetLed&) { return value(); } 
};

template<>
struct DataType<Echoes::ResetLed> {
  static const char* value() 
  {
    return "Echoes/ResetLed";
  }

  static const char* value(const Echoes::ResetLed&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<Echoes::ResetLedRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "6b6d4c3b5d9d236dae096b76debe50d5";
  }

  static const char* value(const Echoes::ResetLedRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<Echoes::ResetLedRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Echoes/ResetLed";
  }

  static const char* value(const Echoes::ResetLedRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<Echoes::ResetLedResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "6b6d4c3b5d9d236dae096b76debe50d5";
  }

  static const char* value(const Echoes::ResetLedResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<Echoes::ResetLedResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Echoes/ResetLed";
  }

  static const char* value(const Echoes::ResetLedResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // ECHOES_SERVICE_RESETLED_H

