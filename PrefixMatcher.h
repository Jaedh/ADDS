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
        std::map<std::string, int> routers;

    public:
        PrefixMatcher();
        ~PrefixMatcher();

        int selectRouter(std::string networkAddress);  // return the router with the longest matching prefix
        void selectRouterRecursion(Node* current, std::string networkAddress, std::vector<std::string>& adresses);

        void insert(std::string address, int routerNumber); // add a router address

};

#endif