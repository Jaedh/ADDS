#include <iostream>
#include "Referee.h"
#include "Solver.h"

Referee::Referee(){

}

Player* Referee::refGame(Player * player1, Player * player2){
    player1_move = player1->makeMove();
    player2_move = player2->makeMove();

    if(player1_move->getName() == player2_move->getName()){
        return nullptr;
    }

    Solver* solver = new Solver(player1_move, player2_move);

    if(solver->Solve()){
        return player1;
    }else{
        return player2;
    }
}

Referee::~Referee(){

}