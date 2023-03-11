#include <iostream>
#include "Computer.h"

Computer::Computer(){
    name = "Computer";
}

Computer::Computer(std::string _name){
    name = _name;
}

Move* Computer::makeMove(){
    MakeMove* tool = new MakeMove();  
    Move* temp = tool->moveObject("Default");
    moves.push_back(temp);       
    return moves.back();
}

std::string Computer::getName(){
    return this->name;
}    

Computer::~Computer(){

}
