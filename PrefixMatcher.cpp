#include "PrefixMatcher.h"
#include <string>
#include <algorithm>
#include <iostream>

PrefixMatcher::PrefixMatcher(){
    root = new Node();
}

PrefixMatcher::~PrefixMatcher(){

}

int PrefixMatcher::selectRouter(std::string networkAddress){
    int result = 0;
    std::vector<std::string> adresses;
    Node* temp = root;
    std::vector<Node* > temp_child;
    int length = networkAddress.length();

    for (int i = 0; i < length; i++){
        temp_child = temp->childNodes;
        for(auto& j: temp_child){
            if(j->data == networkAddress[i]){
                temp=j;
            }
        }
    }

    selectRouterRecursion(temp,networkAddress,adresses);

    auto it = std::max_element(adresses.begin(), adresses.end(),[](const auto& a, const auto& b) {return a.size() < b.size();});

    std::string adress = *it;
    result = routers[adress];

    // for (auto const &pair: routers) {
    //     std::cout << "{" << pair.first << ": " << pair.second << "}\n";
    // }

    return result;
}

void PrefixMatcher::selectRouterRecursion(Node* current, std::string networkAddress, std::vector<std::string>& adresses){
    if(current->isEnd){
        adresses.push_back(networkAddress);
    }

    for(auto& i: current->childNodes){
        selectRouterRecursion(i,networkAddress+i->data,adresses);
    }
}

void PrefixMatcher::insert(std::string address, int routerNumber){
    routers[address] = routerNumber;

    int length = address.length();
    Node* temp = root;
    Node* tempPrevious = temp;
    std::vector<Node* > temp_child;
    int index1;

    for (int i = 0; i < length; i++){
        index1 = 0;
        temp_child = temp->childNodes;
        tempPrevious=temp;
        for(auto& j : temp_child){
            if(j->data == address[i] & j!= nullptr){
                temp=j;
            }else{
                index1++;
            }
        }
        if(temp_child.empty() || index1==temp_child.size()){
            Node* newNode = new Node();
            newNode->data = address[i];
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
