#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include "Player.h"

class Human : public Player{
    private:
        std::string string_move;
    public:
        Human();
        Human(std::string _name);
        Move* makeMove();
        std::string getName();  
        ~Human();
};

#endif