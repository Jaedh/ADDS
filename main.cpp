#include <iostream>
#include <stack>
#include <map>

#include "DocumentManager.h"
#include "Patron.h"

using namespace std;

int main(void){
    // Document* doc1 = new Document("doc1", 1, 10);

    // cout<<doc1->getID()<<endl;
    // cout<<doc1->getLicence_limit()<<endl;
    // cout<<doc1->getName()<<endl;


    // Patron* p = new Patron(69);
    // cout<<p->getID()<<endl;
    // cout<<p->getDoc()->getName()<<endl;
    // p->addDoc(doc1);
    // cout<<p->getDoc()->getName()<<endl;

    DocumentManager* aaa = new DocumentManager();

    aaa->addDocument("doc1", 01, 10);
    aaa->addPatron(100);

    // cout<<aaa->search("doc1")<<endl;
    // cout<<aaa->search("doc2")<<endl;

    cout<<aaa->borrowDocument(01,100)<<endl;
    cout<<aaa->borrowDocument(02,100)<<endl;
    cout<<aaa->borrowDocument(01,101)<<endl;
    cout<<aaa->borrowDocument(02,101)<<endl;


}