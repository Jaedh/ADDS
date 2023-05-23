#ifndef PATRON_H
#define PATRON_H

#include "Document.h"

class Patron{
    private:
        int ID;
        Document* doc;
        bool hasBorrowed;
    public:
        Patron();
        Patron(int _ID);
        ~Patron();

        void addDoc(Document* _doc);
        Document* getDoc();
        void removeDoc();
        int getID();
};

#endif