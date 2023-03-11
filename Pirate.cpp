#include "Pirate.h"

Pirate::Pirate(){
    move_name = "Pirate";
    win_conditions.push_back("Monkey");
    win_conditions.push_back("Robot");
    loss_conditions.push_back("Ninja");
    loss_conditions.push_back("Zombie");
}