#include <iostream>
#include <math.h>

int factorial(int i){
    if(i == 1){
        return 1;
    }

    return i*factorial(i-1);
}

int sum(int i){
    if( i == 1){
        return 1;
    }

    return i + sum(i-1);
}

int sumDigit(int i){
    if(i < 10){
        return i;
    }

    return i%10 + sumDigit(i/10);
}

int reverseDigit(int i){
    if(i  < 10){
        return i;
    }

    return (i%10)*pow(10, (int)log10(reverseDigit(i/10))+1) + reverseDigit(i/10);
}

std::string reverseString(std::string s){
    if(s.size() == 1){
        return s;
    }

    return reverseString(s.erase(0,1)) + s[0];
}

int main(void){

    std::cout<<factorial(4)<<std::endl;
    std::cout<<sum(5)<<std::endl;
    std::cout<<sumDigit(11136)<<std::endl;
    std::cout<<reverseDigit(11136)<<std::endl;

    std::cout<<reverseString("Hello")<<std::endl;


}