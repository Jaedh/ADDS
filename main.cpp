#include <iostream>
#include <string.h>

#include "Computer.h"
#include "Human.h"
#include "Referee.h"

int main(void){
    Computer *test1 = new Computer;
    Computer test2("jaedh");

    Human *test3 = new Human;
    Human test4("kok");

    Referee* r = new Referee;
    std::cout<<r->refGame(test1, test3)->getName()<<std::endl;

}