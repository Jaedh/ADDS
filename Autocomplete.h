#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include <vector>
#include <string>

class Autocomplete{
    private:
        struct Node{
            bool isEnd;
            char data;
            std::vector<Node* > childNodes;
        };
        Node *root;
        
    public:
        Autocomplete();
        ~Autocomplete();

        void insert(std::string word); // add a word to the known words
        std::vector<std::string> getSuggestions(std::string partialWord);  // return the known words that start with partialWord

        void print();
        void printAll(Node* node);

};

#endif