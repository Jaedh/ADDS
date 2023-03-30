#include <iostream>
#include "Finder.h"

int main(void){
    Finder* f =  new Finder();

    std::vector<int> result = f->findSubstrings("4634554567","45689");

    for(auto& i : result){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}