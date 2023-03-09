#include<iostream>
#include "Move.h"

Move::Move(std::string _string_move){
    move = _string_move;
    moves.push_back(move);
}

Move::Move(std::string move1, std::string move2){
    moves.push_back(move1);
    moves.push_back(move2);
    move = move1;
}

void Move::setName(std::string _move){
    move = _move;
}

std::string Move::getName(){
    return this->move;
}

std::vector<std::string> Move::getMoves(){
    return moves;
}

Move::~Move(){

}