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

    p->insert("0010101011010",1);
    p->insert("0010101011010101",2);
    p->insert("001010101101011111111",3);

    cout<<p->selectRouter("001010101")<<endl;

}