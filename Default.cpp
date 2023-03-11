#include "Default.h"

Default::Default(){
    move_name.push_back("Rock");
    win_conditions.push_back("Scissors");
    loss_conditions.push_back("Paper");

    move_name.push_back("Robot");
    win_conditions.push_back("Ninja");
    win_conditions.push_back("Zombie");
    loss_conditions.push_back("Pirate");
    loss_conditions.push_back("Monkey");
}