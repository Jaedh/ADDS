#include <iostream>
#include <string.h>

#include "Computer.h"

int main(void){
    Computer *test1 = new Computer;
    Computer test2("jaedh");


    std::cout<<test1->getName()<<std::endl;
    std::cout<<test2.getName()<<std::endl;

    std::cout<<test1->makeMove()<<std::endl;
    std::cout<<test2.makeMove()<<std::endl;

}