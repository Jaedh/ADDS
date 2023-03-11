#include "MakeMove.h"

MakeMove::MakeMove(){}

MakeMove::~MakeMove(){}

Move* MakeMove::moveObject(std::string _move){
    if(_move == "Rock"){
        Move* result = new Rock();
    }else if(_move == "Paper"){
        Move* result = new Paper();
    }else if(_move == "Scissors"){
        Move* result = new Scissors();
    }else if(_move == "Monkey"){
        Move* result = new Monkey();
    }else if(_move == "Pirate"){
        Move* result = new Pirate();
    }else if(_move == "Zombie"){
        Move* result = new Zombie();
    }else if(_move == "Ninja"){
        Move* result = new Ninja();
    }else if(_move == "Robot"){
        Move* result = new Robot();
    }    
    return result;
} 
