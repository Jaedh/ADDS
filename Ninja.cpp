#include "Ninja.h"

Ninja::Ninja(){
    move_name = "Ninja";
    win_conditions.push_back("Pirate");
    win_conditions.push_back("Zombie");
    loss_conditions.push_back("Monkey");
    loss_conditions.push_back("Robot");
}