#include <iostream>
#include "BinaryTree.h"
#include "Node.h"

BinaryTree::BinaryTree(){

}

BinaryTree::~BinaryTree(){

}

void BinaryTree::addNode(int _value){
    if(root==NULL){
        root = new Node(_value);
    }

    Node* temp = root;

    while(temp!=NULL){
        if(_value > temp->data){
            temp = temp->right;
        }else{
            temp = temp->left;
        }
    }
}

void BinaryTree::preorder(Node* node){
    if(node == NULL){
        return ;
    }

    std::cout<<node->data<<"-> ";
    preorder(node->left);
    preorder(node->right);
}
