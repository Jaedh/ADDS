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

// This function checks if the patron doesnt already have a document borrowed and if it doesnt it adds the document as a varible in this class.
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

// sets the patron to not currently have anything borrowed and resets the document variable
void Patron::removeDoc(){
    hasBorrowed = false;
    doc = new Document();
}

int Patron::getID(){
    return ID;
}

