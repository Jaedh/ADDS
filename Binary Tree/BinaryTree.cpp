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
        return;
    }

    Node* temp = root;

    while(temp!=NULL){
        if(_value > temp->data){
            if(temp->right!=NULL){
                temp = temp->right;
            }else{
                temp->right= new Node(_value);
                break;
            }
        }else{
            if(temp->left!=NULL){
                temp = temp->left;
            }else{
                temp->left= new Node(_value);
                break;
            }
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

void BinaryTree::postorder(Node* node){
    if(node == NULL){
        return ;
    }

    preorder(node->left);
    preorder(node->right);
    std::cout<<node->data<<"-> ";
}

void BinaryTree::inorder(Node* node){
    if(node == NULL){
        return ;
    }

    preorder(node->left);
    std::cout<<node->data<<"-> ";    
    preorder(node->right);
}
