#include <iostream>

int sum(int n){
    if(n==0){
        return n;
    }
    return n%10 + sum(n/10); 
}

int main(void){
    std::cout<<sum(123456)<<std::endl;
}