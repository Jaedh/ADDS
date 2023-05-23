#include <iostream>

#include "DocumentManager.h"

using namespace std;

int main(void){
    Document* doc1 = new Document("doc1", 1, 10);

    cout<<doc1->getID()<<endl;
    cout<<doc1->getLicence_limit()<<endl;
    cout<<doc1->getName()<<endl;
    for (int i = 0; i < 15; i++){
        cout<<doc1->borrow()<<" ";
    }
    cout<<endl;
}