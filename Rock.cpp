#include "Rock.h"

Rock::Rock(){
    move_name = "Rock";
    win_conditions.push_back("Scissors");
    loss_conditions.push_back("Paper");
}