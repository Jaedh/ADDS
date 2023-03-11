#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <vector>
#include "Move.h"
#include "MakeMove.h"

class Player{
    protected:
        std::string name;
        std::vector<Move*> moves;
        // MakeMove* tool;
    public:
        virtual Move* makeMove() = 0;
        virtual std::string getName() = 0;      
};

#endif