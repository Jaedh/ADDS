#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H

#include <vector>
#include <string>
#include <map>

class PrefixMatcher{
    private:
        struct Node{
            bool isEnd;
            char data;
            std::vector<Node* > childNodes;
            int routerID;
            int depth;
        };
        Node *root;

    public:
        PrefixMatcher();
        ~PrefixMatcher();

        int selectRouter(std::string networkAddress);  // return the router with the longest matching prefix

        void insert(std::string address, int routerNumber); // add a router address

};

#endif