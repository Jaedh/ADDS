#include <iostream>
#include "Referee.h"
#include "Solver.h"

Referee::Referee(){

}

Player* Referee::refGame(Player * player1, Player * player2){
    player1_move = player1->makeMove();
    player2_move = player2->makeMove();
    
    if(player1_move->getMoves().size() > player2_move->getMoves().size()){
        Move* temp = player1_move;
        player1_move = player2_move;
        player2_move = temp;
    }

    // if(player1_move->getMoves() == player2_move->getMoves()){
    //     return nullptr;
    // }// sort to see if elemnts in each vector

    for(auto& i: player1_move->getMoves()){
        for(auto& j: player2_move->getMoves()){
            if(i==j){
                return nullptr;
            }
        }
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