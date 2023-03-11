#include <iostream>
#include "Referee.h"
#include <algorithm>

Referee::Referee(){

}

Player* Referee::refGame(Player * player1, Player * player2){
    player1_move = player1->makeMove();
    player2_move = player2->makeMove();

    for(auto& i: player1_move->getMove()){
        for(auto& j: player2_move->getMove()){
            if(i==j){
                return nullptr;
            }
        }
    }

    for(std::string i: player1_move->getWin()){
        for(auto& j: player2_move->getMove()){
            if(i==j){
                player1_move->setName(i);
                player2_move->setName(j);
                return player1;
            }
        }
    }

    return player2;

    // for(auto& i: player1_move->getMoves()){
    //     for(auto& j: player2_move->getMoves()){
    //         if(i==j){
    //             return nullptr;
    //         }
    //     }
    // }

    // Solver* solver = new Solver(player1_move, player2_move);

    // if(solver->Solve()){
    //     return player1;
    // }else{
    //     return player2;
    // }
}

Referee::~Referee(){

}