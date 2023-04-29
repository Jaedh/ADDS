#include "LinkedList.h"
#include "Node.h"
#include "BigNumCalc.h"
#include <iostream>
#include <string>
#include <list>

int main(void){
    // int array[5] = {1,2,3,4,5}; 
    // LinkedList* l = new LinkedList(array, 5);
    // LinkedList* l2 = new LinkedList();


    // l->printList();
    
    // l->insertPosition(3,77);
    // l->printList();

    // l->insertPosition(33,88);
    // l->printList();

    // l->insertPosition(1,11);
    // l->printList();

    // l2->printList();
    // l2->insertPosition(3,77);
    // l2->printList();

    // l2->insertPosition(33,88);
    // l2->printList();

    // l2->insertPosition(1,11);
    // l2->printList();


    // std::cout<<l->deletePosition(3)<<std::endl;
    // l->printList();

    // std::cout<<l->deletePosition(10)<<std::endl;
    // std::cout<<l->deletePosition(-10)<<std::endl;
    // l->printList();

    // std::cout<<l->deletePosition(1)<<std::endl;
    // l->printList();

    // std::cout<<l->deletePosition(6)<<std::endl;
    // l->printList();

    // std::cout<<l->search(69)<<std::endl;
    // l->printList();

    // std::cout<<l->get(-10)<<std::endl;
    // l->printList();

    // l->~LinkedList();

    // l->printList();

    // std::string a = "123456789";
    BigNumCalc* j = new BigNumCalc();

    // std::list<int> k = j->buildBigNum(a);
    // for(auto& i: k){
    //     std::cout<<i<<" ";
    // }
    // std::cout<<std::endl;

    // std::list<int> r = j->add(k,k);     
    // for(auto& i: r){
    //     std::cout<<i<<" ";
    // }
    // std::cout<<std::endl;    

    // std::list<int> m = j->sub(r,k);     
    // for(auto& i: m){
    //     std::cout<<i<<" ";
    // }
    // std::cout<<std::endl;   

    std::list<int> ko = j->buildBigNum("9999");
    std::list<int> ko1 = j->buildBigNum("123456789");

    for(auto& i: ko1){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl; 

    std::list<int> op = j->mul(ko1,ko);

    for(auto& i: op){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl; 


    std::cout<<std::endl;     
    std::list<int> k1o = j->buildBigNum("1111111101");
    std::list<int> k1o1 = j->buildBigNum("11111111010");
    std::list<int> o1p = j->add(k1o1,k1o);

    for(auto& i: o1p){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;     

    // std::list<int> t1 = j->buildBigNum("9876543210");
    // std::list<int> t2 = j->buildBigNum("1234567890");
    // std::list<int> t3 = j->sub(t1,t2);
    // for(auto& i: t3){
    //     std::cout<<i<<" ";
    // }
    // std::cout<<std::endl; 

    // std::list<int> test;
    // std::list<int> test2;
    // for (int i = 0; i < 10; i++){
    //     test.push_back(i);
    // }
    // std::list<int>::iterator itr = test.begin();
    // for (int i = 0; i < 15; i++){
    //     test2.push_back((*itr));
    //     ++itr;
    // }
    // std::cout<<std::endl;

    // for(auto& i: test){
    //     std::cout<<i<<" ";
    // }
    // std::cout<<std::endl;    

    // for(auto& i: test2){
    //     std::cout<<i<<" ";
    // }
    // std::cout<<std::endl;    
    
    
}