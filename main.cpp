#include <iostream>
#include "Reverser.h"

int main(void){
    Reverser* r = new Reverser();

    std::cout<<r->reverseDigit(-99991)<<std::endl;
    std::cout<<r->reverseString("1234567890")<<std::endl;
}