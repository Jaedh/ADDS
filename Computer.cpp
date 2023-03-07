#include <iostream>
#include "Computer.h"

Computer::Computer(){
    name = "Computer";
}

Computer::Computer(std::string _name){
    name = _name;
}

Move* Computer::makeMove(){
    Move* move = new Move("Rock", "Robot");
    return move;
}

std::string Computer::getName(){
    return this->name;
}    

Computer::~Computer(){

}
