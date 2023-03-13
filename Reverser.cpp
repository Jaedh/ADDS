#include "Reverser.h"
#include <math.h>

Reverser::Reverser(){

}

int Reverser::reverseDigit(int value){
    if(value<0){
        return -1;
    }

    if(value < 10){
        return value;
    }

    return (value%10)*pow(10,(int)log10(reverseDigit(value/10))+1) + reverseDigit(value/10);
}

std::string Reverser::reverseString(std::string characters){
    if(characters.size() == 1){
        return characters;
    }

    return reverseString(characters.erase(0,1)) + characters[0];
}

Reverser::~Reverser(){

}