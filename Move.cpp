#include<iostream>
#include "Move.h"

Move::Move(){

}

void Move::setName(std::string _name){
    last_move = _name;
}

std::string Move::getName(){
    return last_move;
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