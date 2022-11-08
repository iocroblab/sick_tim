
#include "std_msgs/String.h"

#include "ros/ros.h"
#include "std_msgs/Float32MultiArray.h"
#include "sensor_msgs/LaserScan.h"
#include "laser_geometry/laser_geometry.h"


int main(int argc, char **argv)
{
	ros::init(argc, argv, "laserscan_merge");
	ros::NodeHandle n;
	ros::Subscriber scan_1_sub_;
        ros::Subscriber scan_2_sub_;
        ros::Subscriber scan_3_sub_;
//subscribe to scan info (/scan_tim_front, /scan_tim_left , /scan_tim_right)

//rotate scan_tim_left (2.0944 rad)

//rotate scan_tim_right (-2.0944 rad)


//concatenate and make msg for publisher /scan 

		ros::spin();
	
  	
}
