#include "Node.h"

Node::Node(int _data, Node* _left, Node* _right) {
    this->data = _data;
    this->left = _left;
    this->right = _right;
}

Node::Node(int _data){
    this->data = _data;
}

Node::~Node(){
    
}