#ifndef NODE_H
#define NODE_H

class Node {
    public:
        int data;
        Node* link;

        Node(int, Node*);
        ~Node();
};

#endif