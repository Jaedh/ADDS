#include "MakeMove.h"

MakeMove::MakeMove(){}

MakeMove::~MakeMove(){}

Move* MakeMove::moveObject(std::string _move){
    result = new Move();
    if(_move == "Rock"){
        this->result = new Rock();
    }else if(_move == "Paper"){
        this->result = new Paper();
    }else if(_move == "Scissors"){
        this->result = new Scissors();
    }else if(_move == "Monkey"){
        this->result = new Monkey();
    }else if(_move == "Pirate"){
        this->result = new Pirate();
    }else if(_move == "Zombie"){
        this->result = new Zombie();
    }else if(_move == "Ninja"){
        this->result = new Ninja();
    }else if(_move == "Robot"){
        this->result = new Robot();
    }else if(_move == "Default"){
        this->result = new Default();
    }    
    return result;
} 
