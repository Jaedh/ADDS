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
    Move* move = new Move(string_move);
    return move;
}

std::string Human::getName(){
    return this->name;
}

Human::~Human(){

}