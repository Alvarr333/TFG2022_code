#!/bin/bash
source /opt/ros/foxy/setup.bash
ros2 run srvcli client 0 0 0 2 0 0.5 0 & ros2 run srvcli client 1 0 0 2 0 -0.5 0 

