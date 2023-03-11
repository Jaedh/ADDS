#include <iostream>
#include "Human.h"

Human::Human(){
    name = "Human";
    MakeMove* tool = new MakeMove();
}

Human::Human(std::string _name){
    name = _name;
    MakeMove* tool = new MakeMove();
}

Move* Human::makeMove(){
    std::cout<<"Enter move: ";        
    std::cin>>string_move;
    moves.push_back(tool->moveObject(string_move));    
    return moves.back();
}

std::string Human::getName(){
    return this->name;
}

Human::~Human(){

}