#include "LinkedList.h"
#include "Node.h"
#include <iostream>

int main(void){
    int array[5] = {1,2,3,4,5}; 
    LinkedList* l = new LinkedList(array, 5);
    LinkedList* l2 = new LinkedList();


    l->printList();
    
    l->insertPosition(3,77);
    l->printList();

    l->insertPosition(33,88);
    l->printList();

    l->insertPosition(1,11);
    l->printList();

    // l2->printList();
    // l2->insertPosition(3,77);
    // l2->printList();

    // l2->insertPosition(33,88);
    // l2->printList();

    // l2->insertPosition(1,11);
    // l2->printList();


    std::cout<<l->deletePosition(3)<<std::endl;
    l->printList();

    std::cout<<l->deletePosition(10)<<std::endl;
    std::cout<<l->deletePosition(-10)<<std::endl;
    l->printList();

    std::cout<<l->deletePosition(1)<<std::endl;
    l->printList();

    std::cout<<l->deletePosition(6)<<std::endl;
    l->printList();

    std::cout<<l->search(69)<<std::endl;
    l->printList();

    std::cout<<l->get(-10)<<std::endl;
    l->printList();
}