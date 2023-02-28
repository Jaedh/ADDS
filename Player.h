#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

class Player{
    protected:
        std::string name;
    public:
        virtual char makeMove() = 0;
        virtual std::string getName() = 0;      
};

#endif