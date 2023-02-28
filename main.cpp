#include <iostream>
#include <string.h>

#include "Computer.h"
#include "Human.h"

int main(void){
    Computer *test1 = new Computer;
    Computer test2("jaedh");

    Human *test3 = new Human;
    Human test4("kok");


    std::cout<<test3->getName()<<std::endl;
    std::cout<<test4.getName()<<std::endl;

    std::cout<<test3->makeMove()<<std::endl;
    std::cout<<test4.makeMove()<<std::endl;

}