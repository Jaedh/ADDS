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

}