#ifndef MAKEMOVE_H
#define MAKEMOVE_H

#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Robot.h"
#include "Ninja.h"
#include "Pirate.h"
#include "Zombie.h"
#include "Default.h"

class MakeMove{
    private:
        Move* result;
    public:
        MakeMove();
        Move* moveObject(std::string _move);      
        ~MakeMove();
};

#endif