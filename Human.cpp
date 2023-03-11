#include <iostream>
#include "Human.h"

Human::Human(){
    name = "Human";
}

Human::Human(std::string _name){
    name = _name;
}

Move* Human::makeMove(){
    std::cout<<"Enter move: ";        
    std::cin>>string_move;
    MakeMove* tool = new MakeMove();
    Move* temp = tool->moveObject(string_move);
    moves.push_back(temp);    
    return moves.back();
}

std::string Human::getName(){
    return this->name;
}

Human::~Human(){

}