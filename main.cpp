#include <iostream>
#include "ADT.h"

int main(void){
    ADT<int>* p = new ADT<int>();

    p->add(1);
    p->add(2);
    p->add(3);
    p->add(4);
    p->add(5);
    p->add(6);
    p->add(7);

    std::vector<int> h = p->returnVal();
    for(auto& i: h){
        std::cout<<i<<std::endl;
    }

    p->remove(2);
    p->remove(2);

    h = p->returnVal();
    for(auto& i: h){
        std::cout<<i<<std::endl;
    }    
}
