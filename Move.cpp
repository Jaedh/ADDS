#include<iostream>
#include "Move.h"

Move::Move(std::string _string_move){
    move = _string_move;
}

std::string Move::getName(){
    return this->move;
}

Move::~Move(){

}