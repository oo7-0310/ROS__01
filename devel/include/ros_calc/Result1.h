// Generated by gencpp from file ros_calc/Result1.msg
// DO NOT EDIT!


#ifndef ROS_CALC_MESSAGE_RESULT1_H
#define ROS_CALC_MESSAGE_RESULT1_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_calc
{
template <class ContainerAllocator>
struct Result1_
{
  typedef Result1_<ContainerAllocator> Type;

  Result1_()
    : data(0.0)  {
    }
  Result1_(const ContainerAllocator& _alloc)
    : data(0.0)  {
  (void)_alloc;
    }



   typedef double _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::ros_calc::Result1_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_calc::Result1_<ContainerAllocator> const> ConstPtr;

}; // struct Result1_

typedef ::ros_calc::Result1_<std::allocator<void> > Result1;

typedef boost::shared_ptr< ::ros_calc::Result1 > Result1Ptr;
typedef boost::shared_ptr< ::ros_calc::Result1 const> Result1ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_calc::Result1_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_calc::Result1_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ros_calc

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'ros_calc': ['/home/suntall/catkin_ws/src/ros_calc/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ros_calc::Result1_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_calc::Result1_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_calc::Result1_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_calc::Result1_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_calc::Result1_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_calc::Result1_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_calc::Result1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fdb28210bfa9d7c91146260178d9a584";
  }

  static const char* value(const ::ros_calc::Result1_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfdb28210bfa9d7c9ULL;
  static const uint64_t static_value2 = 0x1146260178d9a584ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_calc::Result1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_calc/Result1";
  }

  static const char* value(const ::ros_calc::Result1_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_calc::Result1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 data\n\
";
  }

  static const char* value(const ::ros_calc::Result1_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_calc::Result1_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Result1_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_calc::Result1_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_calc::Result1_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    Printer<double>::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_CALC_MESSAGE_RESULT1_H