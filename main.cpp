#include <iostream>
#include "Finder.h"

int main(void){
    Finder* f =  new Finder();

    std::vector<int> result = f->findSubstrings("4634554567","45689");

    for(auto& i : result){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;




    // std::string a = "abcdefghij";

    // for (int i = 0; i < 10; i++){
    //     for (int j = 0; j < 10-i; j++){
    //         std::cout<<a.substr(i,j)<<std::endl;
    //     }
    //     std::cout<<std::endl;
    // }

    // std::map<size_t,size_t> a;
    // a[0]=3;
    // a[1]=1;
    // a[2]=2;

    // std::cout<<a.find(2);
    
}