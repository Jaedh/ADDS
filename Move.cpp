#include<iostream>
#include "Move.h"

Move::Move(){

}

std::string Move::getName(){
    return move_name.back();
}

std::vector<std::string> Move::getMove(){
    return move_name;
}

std::vector<std::string> Move::getWin(){
    return win_conditions;
}

std::vector<std::string> Move::getLoss(){
    return loss_conditions;
}

Move::~Move(){

}