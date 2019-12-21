//
// Created by ludovic on 09/11/19.
//

#ifndef TALONSRX_HARDWARE_H
#define TALONSRX_HARDWARE_H

#include "hardware_interface/joint_state_interface.h"
#include "hardware_interface/joint_state_interface.h"
#include "hardware_interface/robot_hw.h"
#include "ros/ros.h"
#include "sensor_msgs/JointState.h"

namespace talon_srx_hardware_interface {
    class TalonSRXHardwareInterface : public hardware_interface::RobotHW {
    public:
    bool init(ros::NodeHandle &)
    };
}

#endif //TAKIN_ROS_CONTROL_WS_TALONSRX_HARDWARE_H