#ifndef MOVE_H
#define MOVE_H

#include <iostream>

class Move{
    private:
        std::string move;
    public:
        Move(std::string _string_move);
        std::string getName();
        ~Move();
};

#endif