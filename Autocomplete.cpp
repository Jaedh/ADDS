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
            // newNode->childNodes.push_back(nullptr);
            tempPrevious->childNodes.push_back(newNode);
            temp = newNode;
        }
    }
    std::cout<<"Done - insert"<<std::endl;
    
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


    return result;
} 

void Autocomplete::print(){
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