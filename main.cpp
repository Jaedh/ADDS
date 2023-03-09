#include <iostream>
#include <string.h>

#include "Computer.h"
#include "Human.h"
#include "Referee.h"

int main(void){
    Player *test1 = new Computer;
    Computer test2("jaedh");

    Player *test3 = new Human;
    Human test4("kok");

    Referee* r = new Referee;
    std::cout<<r->refGame(test3, test1)->getName()<<std::endl;

}