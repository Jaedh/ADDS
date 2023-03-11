#include <iostream>
#include "MakeMove.h"
#include "Move.h"

int main(void){
    MakeMove* test = new MakeMove();

    Move* a;
    a = test->moveObject("Paper");

    Move *b = new Rock();
    // std::cout<<b->getName()<<std::endl;

    std::cout<<a->getMove()[0]<<std::endl;
    std::cout<<a->getWin()[0]<<std::endl;
    std::cout<<a->getLoss()[0]<<std::endl;
}