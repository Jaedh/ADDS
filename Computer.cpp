#include <iostream>
#include "Computer.h"

Computer::Computer(){
    name = "Computer";
}

Computer::Computer(std::string _name){
    name = _name;
}

char Computer::makeMove(){
    return 'R';
}

std::string Computer::getName(){
    return this->name;
}    

Computer::~Computer(){

}
