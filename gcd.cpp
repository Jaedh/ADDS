#include <iostream>

int gcd(int n, int m){
    if(m==0){
        return n;
    }
    return gcd(m, n%m);
}

int main(void){
    std::cout<<gcd(1256636, 1630968)<<std::endl;
}