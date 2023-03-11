#include "Scissors.h"

Scissors::Scissors(){
    move_name = "Scissors";
    win_conditions.push_back("Paper");
    loss_conditions.push_back("Rock");
}