#ifndef SOLVER_H
#define SOLVER_H

#include <iostream>
#include "Move.h"
#include <map>
#include <vector>

class Solver{
    private:
        Move* player1;
        Move* player2;
        std::map<std::string, std::vector<std::string>>win;
    public:
        Solver(Move* _player1, Move* _player2);
        bool Solve();
        ~Solver();

};

#endif