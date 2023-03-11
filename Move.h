#ifndef MOVE_H
#define MOVE_H

#include <iostream>
#include <vector>

class Move{
    protected:
        std::vector<std::string> move_name;
        std::string last_move;
        std::vector<std::string> win_conditions;
        std::vector<std::string> loss_conditions;
    public:
        Move();
        std::string getName();
        std::vector<std::string> getMove();
        std::vector<std::string> getWin();
        std::vector<std::string> getLoss();
        void setName(std::string _name);
        ~Move();
};

#endif