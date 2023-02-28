#ifndef REFEREE_H
#define REFEREE_H

#include <iostream>
#include "Player.h"
#include "Human.h"
#include "Computer.h"

class Referee{
    private:
        char player1_move;
        char player2_move;
    public:
    Referee(); 
    Player * refGame(Player * player1, Player * player2);
    ~Referee();
};

#endif