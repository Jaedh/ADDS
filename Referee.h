#ifndef REFEREE_H
#define REFEREE_H

#include <iostream>
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Move.h"

class Referee{
    private:
        Move*  player1_move;
        Move*  player2_move;
    public:
        Referee(); 
        Player* refGame(Player * player1, Player * player2);
        ~Referee();
};

#endif