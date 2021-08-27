#include "ros/ros.h" 
#include "ros_calc/Result1.h"



void msgCallback(const  ros_calc ::Result1::ConstPtr& msg)

{

    ROS_INFO("recieve average = %f", msg->data); 

}

int main(int argc, char **argv)                 

{
   ros::init(argc, argv, "ros_calc_subscriber");    // 설정한 노드명으로 초기
 

    ros::NodeHandle nh;    

    ros::Subscriber ros_calc_subscriber = nh.subscribe("ros_calc_msg", 1000, msgCallback);
//토픽명과 큐는 publisher과 동일, 이 토픽명이 날라오면 msgCallback함수 호출

 

    ros::spin();

 

    return 0;

}
 
