#include "Autocomplete.h"
#include <iostream>

using namespace std;

int main(void){
    Autocomplete* a = new Autocomplete();
    // a->insert("hi");
    // a->insert("hil");

    // a->insert("apple");
    // a->insert("he");
    // a->insert("heat");
    // a->insert("heap");
    // a->insert("heatpy");
    // a->insert("heatty");
    // a->insert("he");

    a->insert("banana");
    a->insert("bandaid");
    a->insert("bandana");

    a->print();
}