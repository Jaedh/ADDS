#include <iostream>

#include "Node.h"
#include "LinkedList.h"

using namespace std;

Node* reverseList(Node* head){
    if(head==NULL || head->link==NULL){
        return head;
    }

    Node* rest = reverseList(head->link);
    head->link->link=head;
    head->link=NULL;

    return rest;
}

int main(void){
    int list[5] = {1,2,3,4,5};
    LinkedList* l1 = new LinkedList(list,5);

    l1->printList();

    Node* result = reverseList(l1->returnHead());

    while(result!=NULL){
        cout<<result->data<<" ";
        result=result->link;
    }
    cout<<endl;

}