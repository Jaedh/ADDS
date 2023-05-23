#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H

#include <string>
#include <map>
#include <vector>

#include "Document.h"
#include "Patron.h"

class DocumentManager{
    private:
        std::map<std::string, Document*> documents_name;        //map to connect the documents name as a key to the document object
        std::map<int, Document*> documents_id;                  //map to connect the documents ID as a key to the document object
        std::map<int, Patron*> patrons;                         //map to connect the patrons ID as a key to the patron object
    public:
        DocumentManager();
        ~DocumentManager();

        void addDocument(std::string name, int id, int license_limit);
        void addPatron(int patronID);
        int search(std::string name);
        bool borrowDocument(int docid, int patronID);
        void returnDocument(int docid, int patronID);
};

#endif