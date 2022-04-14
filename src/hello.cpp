#include<ros/ros.h>

int main(int argc, char **argv){
    // initialize the ROS system

    ros :: init(argc,argv,"hello_cpp");

    //establish the program as ROS node

    ros :: NodeHandle nh;

    //send some output as long message

    ROS_INFO_STREAM("Hello chadarmod duniya!!");

    return 0;
}