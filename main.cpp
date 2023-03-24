#include <iostream>
#include "Bag.h"

int main(void){
    Bag<int>* b = new Bag<int>();

    b->addItem(1);
    b->addItem(2);
    b->addItem(3);
    b->addItem(4);
    b->addItem(5);

    std::vector<int> a = b->Returnitems();
    for(auto& i: a){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;

    b->removeItem();
    b->removeItem();
    b->removeItem();
    a = b->Returnitems();
    for(auto& i: a){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}