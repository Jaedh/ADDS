#include <iostream>
#include "Referee.h"

Referee::Referee(){

}

Player* Referee::refGame(Player * player1, Player * player2){
    player1_move = player1->makeMove();
    player2_move = player2->makeMove();

    if(player1_move == player2_move){
        return nullptr;
    }

    if((player1_move == 'r' && player2_move == 's')||(player1_move == 's' && player2_move == 'p')||(player1_move == 'p' && player2_move == 'r')){
        return player1;
    }else{
        return player2;
    }
}

Referee::~Referee(){

}