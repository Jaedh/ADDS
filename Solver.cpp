#include <iostream>
#include "Solver.h"
#include <algorithm>

Solver::Solver(Move* _player1, Move* _player2){
    player1 = _player1;
    player2 = _player2;
    win["Rock"] = {"Scissor"};
    win["Paper"] = {"Rock"};
    win["Scissor"] = {"Paper"};
    win["Monkey"] = {"Ninja", "Robot"};
    win["Robot"] = {"Ninja", "Zombie"};
    win["Pirate"] = {"Robot", "Monkey"};
    win["Ninja"] = {"Pirate", "Zombie"};
    win["Zombie"] = {"Pirate", "Monkey"};
}

bool Solver::Solve(){
    std::vector<std::string> temp = win[player1->getName()];
    if(std::find(temp.begin(), temp.end(), player2->getName()) != temp.end()){
        return true;
    }
    return false;
}

Solver::~Solver(){

}