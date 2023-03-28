#include <iostream>

void stars(int n){
    if(n==0){
        std::cout<<std::endl;
        return;
    }
    std::cout<<"*";
    stars(n-1);
}

void pyramid(int n){
    if(n==0){
        return;
    }
    pyramid(n-1);
    stars(n);
}

int main(void){
    // stars(700);
    pyramid(4);
}