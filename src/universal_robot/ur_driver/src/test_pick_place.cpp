#include "ros/ros.h"
#include "roboticArm.h"

int main (int argc, char **argv)
{
    ros::init(argc, argv, "move_robot");
    ros::NodeHandle n; /* necessaire pour que ros::ok retourne true ??? */

    RoboticArm robot;
    std::vector<tf::Transform> trajectory;


    /* exemple de prise en avec position compensée */
    tf::Vector3 origin;
    tf::Matrix3x3 basis;
    tf::Transform pick_pose;
    tf::Transform pick_approach_pose;

    robot.activate_gripper();

    while (ros::ok())
    {
        origin.setValue(0.49863, -0.28074, 0.2785);
        basis.setRPY(3.0643, -0.0239, -1.4411);

        pick_pose.setOrigin(origin);
        pick_pose.setBasis(basis);

        pick_approach_pose.setOrigin(pick_pose.getOrigin());
        pick_approach_pose.setBasis(pick_pose.getBasis());
        pick_approach_pose.getOrigin().setZ(pick_approach_pose.getOrigin().getZ() + 0.030);

        trajectory.resize(3);
        trajectory[0] = robot.tf_home;
        trajectory[1] = pick_approach_pose;
        trajectory[2] = pick_pose;

        /* execution*/
        robot.open_fingers();
        robot.execute_trajectory(trajectory, 0.3);
        robot.close_fingers(255, 0, true);

        trajectory.resize(2);
        trajectory[0] = pick_approach_pose;
        trajectory[1] = robot.tf_home;

        robot.execute_trajectory(trajectory, 0.3);
        robot.open_fingers();
    }
}
