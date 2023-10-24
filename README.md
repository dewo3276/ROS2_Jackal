# ROS2_Jackal
A version of the jackal that will actually work and run unlike clearpath's instruction on how to "upgrade" a jackal

1. Have Ubuntu 22.04 installed on your machine as well as ros-humble-desktop-full
2. mkdir -p ~/jackal_ws
   cd ~/jackal_ws
   git clone https://github.com/dewo3276/ROS2_Jackal/tree/master
   source /opt/ros/humble/setup.bash
   source install/local_setup.bash
   colcon build
3. ros2 launch jackal_robot bringup.launch.py
