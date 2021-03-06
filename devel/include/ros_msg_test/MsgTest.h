// Generated by gencpp from file ros_msg_test/MsgTest.msg
// DO NOT EDIT!


#ifndef ROS_MSG_TEST_MESSAGE_MSGTEST_H
#define ROS_MSG_TEST_MESSAGE_MSGTEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_msg_test
{
template <class ContainerAllocator>
struct MsgTest_
{
  typedef MsgTest_<ContainerAllocator> Type;

  MsgTest_()
    : stamp()
    , data(0)  {
    }
  MsgTest_(const ContainerAllocator& _alloc)
    : stamp()
    , data(0)  {
  (void)_alloc;
    }



   typedef ros::Time _stamp_type;
  _stamp_type stamp;

   typedef int32_t _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::ros_msg_test::MsgTest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_msg_test::MsgTest_<ContainerAllocator> const> ConstPtr;

}; // struct MsgTest_

typedef ::ros_msg_test::MsgTest_<std::allocator<void> > MsgTest;

typedef boost::shared_ptr< ::ros_msg_test::MsgTest > MsgTestPtr;
typedef boost::shared_ptr< ::ros_msg_test::MsgTest const> MsgTestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_msg_test::MsgTest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_msg_test::MsgTest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ros_msg_test

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'ros_msg_test': ['/home/suntall/catkin_ws/src/ros_msg_test/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ros_msg_test::MsgTest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_msg_test::MsgTest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_msg_test::MsgTest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_msg_test::MsgTest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_msg_test::MsgTest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_msg_test::MsgTest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_msg_test::MsgTest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bc5a8a0aefee54a11d41536be86744a6";
  }

  static const char* value(const ::ros_msg_test::MsgTest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbc5a8a0aefee54a1ULL;
  static const uint64_t static_value2 = 0x1d41536be86744a6ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_msg_test::MsgTest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_msg_test/MsgTest";
  }

  static const char* value(const ::ros_msg_test::MsgTest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_msg_test::MsgTest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "time stamp\n\
int32 data\n\
";
  }

  static const char* value(const ::ros_msg_test::MsgTest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_msg_test::MsgTest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stamp);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MsgTest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_msg_test::MsgTest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_msg_test::MsgTest_<ContainerAllocator>& v)
  {
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
    s << indent << "data: ";
    Printer<int32_t>::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_MSG_TEST_MESSAGE_MSGTEST_H
