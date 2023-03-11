#include <iostream>
#include "Computer.h"

Computer::Computer(){
    name = "Computer";
    MakeMove* tool = new MakeMove();
    moves.push_back(tool->moveObject("Rock"));
    moves.push_back(tool->moveObject("Robot"));    
}

Computer::Computer(std::string _name){
    name = _name;
    MakeMove* tool = new MakeMove();
    moves.push_back(tool->moveObject("Rock"));
    moves.push_back(tool->moveObject("Robot"));    
}

Move* Computer::makeMove(){
    return moves[0];
}

std::string Computer::getName(){
    return this->name;
}    

Computer::~Computer(){

}
