#include <iostream>
#include <stack>
#include <map>

#include "DocumentManager.h"
#include "Patron.h"

using namespace std;

int main(void){
    DocumentManager* aaa = new DocumentManager();

    aaa->addDocument("doc1", 01, 10);
    aaa->addPatron(100);
    aaa->addPatron(101);
    aaa->addPatron(102);
    aaa->addPatron(103);
    aaa->addPatron(104);
    aaa->addPatron(105);
    aaa->addPatron(106);
    aaa->addPatron(107);
    aaa->addPatron(108);
    aaa->addPatron(109);
    aaa->addPatron(110);
    aaa->addPatron(111);
    aaa->addPatron(112);

    cout<<aaa->search("doc1")<<endl;
    cout<<aaa->search("doc2")<<endl;

    cout<<aaa->borrowDocument(01,100)<<endl;
    cout<<aaa->borrowDocument(01,100)<<endl;
    cout<<aaa->borrowDocument(01,100)<<endl;
    cout<<aaa->borrowDocument(02,100)<<endl;
    cout<<aaa->borrowDocument(01,101)<<endl;
    cout<<aaa->borrowDocument(02,101)<<endl;

    cout<<endl;

    aaa->returnDocument(01,100);
    cout<<aaa->borrowDocument(01,100)<<endl;
    cout<<aaa->borrowDocument(01,101)<<endl;
    cout<<aaa->borrowDocument(01,102)<<endl;
    cout<<aaa->borrowDocument(01,103)<<endl;
    cout<<aaa->borrowDocument(01,104)<<endl;
    cout<<aaa->borrowDocument(01,105)<<endl;
    cout<<aaa->borrowDocument(01,106)<<endl;
    cout<<aaa->borrowDocument(01,107)<<endl;
    cout<<aaa->borrowDocument(01,108)<<endl;
    cout<<aaa->borrowDocument(01,110)<<endl;
    cout<<aaa->borrowDocument(01,111)<<endl;
    cout<<aaa->borrowDocument(01,112)<<endl;
}