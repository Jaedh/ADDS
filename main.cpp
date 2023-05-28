#include <iostream>
#include <stack>
#include <map>

#include "DocumentManager.h"
#include "Patron.h"

using namespace std;

int main(void){
    DocumentManager* aaa = new DocumentManager();

    aaa->addDocument("doc1", 01, 3);
    aaa->addPatron(100);
    aaa->addPatron(101);
    aaa->addPatron(102);
    aaa->addPatron(103);

    cout<<aaa->borrowDocument(01,100)<<endl;
    cout<<aaa->borrowDocument(01,101)<<endl;
    cout<<aaa->borrowDocument(01,102)<<endl;
    cout<<aaa->borrowDocument(01,103)<<endl;
    aaa->returnDocument(01,102);
    cout<<aaa->borrowDocument(01,103)<<endl;
}