#ifndef MOVE_H
#define MOVE_H

#include <iostream>
#include <vector>

class Move{
    private:
        std::vector<std::string> moves;
        std::string move;
    public:
        Move(std::string _string_move);
        Move(std::string move1, std::string move2);
        std::string getName();
        std::vector<std::string> getMoves();
        ~Move();
};

#endif