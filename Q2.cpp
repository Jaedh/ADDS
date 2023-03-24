#include <iostream>

void print(int n){
    if(n<=0){
        std::cout<<std::endl;
        return;
    }

    print(n-1);
    std::cout<<n;
    // print(n-1);
}

int main(void){
    print(5);
}