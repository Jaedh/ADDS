#include "LinkedList.h"
#include <iostream>
#include <limits>

LinkedList::LinkedList(){
    head = new Node(0,NULL);
}

LinkedList::LinkedList(int* array, int len){
    head = new Node(0,NULL);
    Node* tail = head;
    for (int i = 0; i < len; i++){
        Node* temp = new Node(array[i],NULL);
        tail->link = temp;
        tail = temp;
    }
}

LinkedList::~LinkedList(){

}

void LinkedList::insertPosition(int pos, int newNum){
    int len = 0;
    Node* tail = head->link;
    while(tail!=NULL){
        len++;
        tail=tail->link;
    }
    
    tail = head;
    while(tail->link!=NULL){
        tail=tail->link;
    }

    if(pos > len){
        Node* temp = new Node(newNum,NULL);
        tail->link = temp;
        tail = temp;        
    }else if(pos <= 1){
        Node* temp = new Node(newNum, head->link);
        head->link = temp;
    }else{
        Node* Newpos = head->link;
        for (int i = 1; i < pos-1; i++){
            Newpos=Newpos->link;
        }
        Node* temp = new Node(newNum,Newpos->link);
        Newpos->link = temp;
    }
}

bool LinkedList::deletePosition(int pos){
    int len = 0;
    Node* tail = head->link;
    while(tail!=NULL){
        len++;
        tail=tail->link;
    }

    if(pos < 1 || pos > len){
        return false;
    }else{
        Node* temp = head->link;

        if(pos==1){
            head->link=temp;
            head=temp;
            return true;
        }

        for (int i = 1; i < pos-1; i++){
            temp=temp->link;
        }
        if(pos==len){
            temp->link=NULL;
        }else{
            temp->link=temp->link->link;
        } 
        return true;
    }
}

int LinkedList::get(int pos){
    int len = 0;
    Node* tail = head->link;
    while(tail!=NULL){
        len++;
        tail=tail->link;
    }

    if(pos < 1){
        return std::numeric_limits<int>::min();
    }else if(pos > len){
        return std::numeric_limits<int>::max();
    }else{
        Node* temp = head->link;
        for (int i = 1; i < pos; i++)
        {
            temp=temp->link;
        }
        return temp->data;
    }    
}

int LinkedList::search(int target){
    Node* tail = head->link;
    int pos = 1;

    while(tail != NULL){
        if(tail->data == target){
            return pos;
        }
        pos++;
        tail=tail->link;
    }
    return -1;
}

void LinkedList::printList(){
    Node* tail = head->link;

    std::cout<<"[";
    while (tail != NULL){
        std::cout<<tail->data;
        if(tail->link != NULL){
            std::cout<<" ";
        }
        tail=tail->link;
    }
    std::cout<<"]"<<std::endl; 
}