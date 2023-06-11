#include <iostream>

#include "Node.h"
#include "BinaryTree.h"

using namespace std;

int main(void){
    BinaryTree* b1= new BinaryTree();

    // b1->addNode(1);
    // b1->addNode(2);
    // b1->addNode(3);
    // b1->addNode(4);
    // b1->addNode(5);
    // b1->addNode(6);

    b1->addNode(1);
    b1->addNode(9); 
    b1->addNode(12);
    b1->addNode(5);
    b1->addNode(6);

    b1->preorder(b1->root);
    cout<<endl;

    b1->inorder(b1->root);
    cout<<endl;

    b1->postorder(b1->root);
    cout<<endl;
}