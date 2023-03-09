#include <iostream>
#include "Solver.h"
#include <algorithm>

Solver::Solver(Move* _player1, Move* _player2){
    player1 = _player1;
    player2 = _player2;
    win["Rock"] = {"Paper"};
    win["Paper"] = {"Scissor"};
    win["Scissor"] = {"Rock"};
    win["Monkey"] = {"Zombie", "Pirate"};
    win["Robot"] = {"Pirate", "Monkey"};
    win["Pirate"] = {"Zombie", "Ninja"};
    win["Ninja"] = {"Robot", "Monkey"};
    win["Zombie"] = {"Robot", "Ninja"};
}

bool Solver::Solve(){
    std::vector<std::string> temp = win[player1->getMoves()[0]];

    for(auto& i: player2->getMoves()){
        if(std::find(temp.begin(), temp.end(), i) != temp.end()){
            player2->setName(i);
            return false;
        }
    }
    return true;
}

Solver::~Solver(){

}