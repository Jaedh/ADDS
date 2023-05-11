#include "Autocomplete.h"
#include <iostream>

using namespace std;

int main(void){
    Autocomplete* a = new Autocomplete();
    // a->insert("hi");
    // a->insert("hil");
    a->insert("he");
    a->insert("heat");
    a->insert("heap");

    a->print();
}