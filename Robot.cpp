#include "Robot.h"

Robot::Robot(){
    move_name.push_back("Robot");
    win_conditions.push_back("Ninja");
    win_conditions.push_back("Zombie");
    loss_conditions.push_back("Pirate");
    loss_conditions.push_back("Monkey");
}