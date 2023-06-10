#ifndef BINARYTREE_H
#define BINARYTREE_H

#include "Node.h"

class BinaryTree{
    public:
        Node* root;

        BinaryTree();
        ~BinaryTree();

        void addNode(int _value);

        void preorder(Node* node);

};

#endif