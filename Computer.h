#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include "Player.h"

class Computer : public Player{
    private:

    public:
        Computer();
        Computer(std::string _name);
        Move* makeMove();
        std::string getName();    
        ~Computer();
};

#endif