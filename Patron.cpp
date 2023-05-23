#include "Patron.h"

Patron::Patron(){
    ID = 0;
    hasBorrowed = false;
}

Patron::Patron(int _ID){
    ID = _ID;
    hasBorrowed = false;
}

Patron::~Patron(){

}

void Patron::addDoc(Document* _doc){
    doc = _doc;
    hasBorrowed = true;
}

Document* Patron::getDoc(){
    return doc;
}

void Patron::removeDoc(){
    hasBorrowed = false;
    doc = new Document();
}

