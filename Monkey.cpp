#include "Monkey.h"

Monkey::Monkey(){
    move_name = "Monkey";
    win_conditions.push_back("Ninja");
    win_conditions.push_back("Robot");
    loss_conditions.push_back("Pirate");
    loss_conditions.push_back("Zombie");
}