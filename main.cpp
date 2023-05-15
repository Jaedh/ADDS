#include "Autocomplete.h"
#include "PrefixMatcher.h"
#include <iostream>

using namespace std;

int main(void){
    Autocomplete* a = new Autocomplete();
    a->insert("banana");
    a->insert("bandaid");
    a->insert("bandana");

    vector<string> result;
    result = a->getSuggestions("band");
    for(auto& i : result){
        cout<<i<<endl;
    }

    PrefixMatcher* p = new PrefixMatcher();

    p->insert("10",1);
    p->insert("100",2);
    p->insert("1000",3);
    p->insert("10010",4);

    cout<<p->selectRouter("100101")<<endl;
    cout<<p->selectRouter("1000")<<endl;
    cout<<p->selectRouter("101")<<endl;
    cout<<p->selectRouter("1")<<endl;

}