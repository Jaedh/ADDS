#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include "Player.h"

class Human : public Player{
    private:
        char move;
    public:
        Human();
        Human(std::string _name);
        char makeMove();
        std::string getName();  
        ~Human();
};

#endif