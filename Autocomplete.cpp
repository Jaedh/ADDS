#include "Autocomplete.h"
#include <string>
#include <algorithm>
#include <iostream>


Autocomplete::Autocomplete(){
    root = new Node();
}

Autocomplete::~Autocomplete(){

}

void Autocomplete::insert(std::string word){
    int length = word.length();
    Node* temp = root;
    Node* tempPrevious = temp;
    std::vector<Node* > temp_child;
    int index1;

    for (int i = 0; i < length; i++){
        index1 = 0;
        temp_child = temp->childNodes;
        tempPrevious=temp;
        for(auto& j : temp_child){
            if(j->data == word[i] & j!= nullptr){
                temp=j;
            }else{
                index1++;
            }
        }
        if(temp_child.empty() || index1==temp_child.size()){
            Node* newNode = new Node();
            newNode->data = word[i];
            if(i==length-1){
                newNode->isEnd = true;
            }else{
                newNode->isEnd = false;
            }
            tempPrevious->childNodes.push_back(newNode);
            temp = newNode;
        }
    }
    
}

std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord){
    std::vector<std::string> result;
    Node* temp = root;
    std::vector<Node* > temp_child;
    int length = partialWord.length();

    for (int i = 0; i < length; i++){
        temp_child = temp->childNodes;
        for(auto& j: temp_child){
            if(j->data == partialWord[i]){
                temp=j;
            }
        }
    }

    getSuggectionsRecursion(temp,partialWord,result);

    return result;
} 

void Autocomplete::getSuggectionsRecursion(Node* current, std::string partialWord, std::vector<std::string>& suggestions){
    if(current->isEnd){
        suggestions.push_back(partialWord);
    }

    for(auto& i: current->childNodes){
        getSuggectionsRecursion(i,partialWord+i->data,suggestions);
    }
}

void Autocomplete::print(){
    // std::cout<<std::endl;
    // printAll(root);

    Node* temp = root;
    std::vector<Node* > temp_child;

    while(temp != nullptr){
        temp_child = temp->childNodes;
        for(auto& j: temp_child){
            std::cout<<j->data<<" ";
        }
        std::cout<<std::endl;
        temp = temp_child.at(0);
    }
       

}

void Autocomplete::printAll(Node* temp){
    std::vector<Node* > temp_child;
    temp_child = temp->childNodes;

    std::cout<<temp->data<<" ";
    if(temp->isEnd){
        std::cout<<std::endl;
    }

    for(auto& i : temp_child){
        printAll(i);
    }
}