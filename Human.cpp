#include <iostream>
#include "Human.h"

Human::Human(){
    name = "Human";
}

Human::Human(std::string _name){
    name = _name;
}

char Human::makeMove(){
    while(true){
        std::cout<<"Enter move: ";        
        std::cin>>move;
        if(move=='R' || move=='R' || move=='R'){
            break;
        }
    }
    return move;
}

std::string Human::getName(){
    return this->name;
}

Human::~Human(){

}