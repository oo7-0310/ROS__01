#include "ros/ros.h" 
#include "ros_calc/Result1.h"//msg파일 헤더
#include <time.h>

int main(int argc, char **argv)                 

{
   srand(time(NULL));

    ros::init(argc, argv, "ros_calc_publisher"); //지정한 노드명으로 초기

    ros::NodeHandle nh;//노드 컨트롤

    ros::Publisher ros_calc_publisher = nh.advertise< ros_calc :: Result1 >("ros_calc_msg", 1000);
	//advertise: 만든 후에 다른 사람들한테 '난 이거야'하고 알려주는거

	//"ros_calc_msg"는 토픽이름 subscriber에도 똑같이
	//1000 혼자 하는 거면 상관 없음. 협업 -> 네트워크 환경 고려해서 적당히 크게 잡아놓을 것
    ros::Rate loop_rate(100);

    int a = 0;
    
    ros_calc :: Result1 msg;


    float average = 0;  
    int count = 1;
                         

    while (ros::ok())

    {
	a = rand()%100;//랜덤으로 숫자 계속 받아서 
	

        
	average = (average + a)/count;
	msg.data = average;
	ROS_INFO("+%d", a);//ROS_INFO 터미널 창에 찍힘
	ROS_INFO("average => %f", msg.data);//평균구하기(받은 수 더하고 지금까지 받은 수의 개수로 나누기)
	
	ros_calc_publisher.publish(msg);//msg에 있는 것 통째로 발송
        loop_rate.sleep();   
	
	count++;
 

    }
    return 0;
}
 
