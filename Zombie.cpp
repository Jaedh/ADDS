#include "Zombie.h"

Zombie::Zombie(){
    move_name = "Zombie";
    win_conditions.push_back("Pirate");
    win_conditions.push_back("Monkey");
    loss_conditions.push_back("Ninja");
    loss_conditions.push_back("Robot");
}