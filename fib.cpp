#include <iostream>
#include <map>

static int i =0;

int fib(int n){
    static std::map<int, int> results;

    if(n==0 || n==1){
        return n;
    }

    if(results.find(n) == results.end()){
        results[n] = fib(n-1) + fib(n-2);
    }

    i++;
    return results[n];
}

int main(void){
    std::cout<<fib(21)<<std::endl;
    std::cout<<i<<std::endl;
}