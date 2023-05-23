#include "Patron.h"

Patron::Patron(){
    ID = 0;
    hasBorrowed = false;
    doc = new Document();
}

Patron::Patron(int _ID){
    ID = _ID;
    hasBorrowed = false;
    doc = new Document();
}

Patron::~Patron(){

}

bool Patron::addDoc(Document* _doc){
    if(!hasBorrowed){
        doc = _doc;
        hasBorrowed = true;
        return true;
    }
    return false;
}

Document* Patron::getDoc(){
    return doc;
}

void Patron::removeDoc(){
    hasBorrowed = false;
    doc = new Document();
}

int Patron::getID(){
    return ID;
}

