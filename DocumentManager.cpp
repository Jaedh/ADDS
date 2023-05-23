#include "DocumentManager.h"

DocumentManager::DocumentManager(){

}

DocumentManager::~DocumentManager(){

}


void DocumentManager::addDocument(std::string name, int id, int license_limit){
    Document* temp_doc = new Document(name, id, license_limit);
    documents_name[name] = temp_doc;
    documents_id[id] = temp_doc;
}

void DocumentManager::addPatron(int patronID){
    Patron* temp_patron = new Patron(patronID);
    patrons[patronID] = temp_patron;
}

int DocumentManager::search(std::string name){
    if(documents_name.find(name)==documents_name.end()){
        return 0;
    }
    return documents_name[name]->getID();
} 

bool DocumentManager::borrowDocument(int docid, int patronID){
    if(documents_id.find(docid)== documents_id.end() || patrons.find(patronID)==patrons.end()){
        return false;
    }
    
    Document* temp_doc = documents_id[docid];
    Patron* temp_patron = patrons[patronID];

    bool canBorrow = temp_doc->borrow();

    if(canBorrow){
        temp_patron->addDoc(temp_doc);
    }
    return canBorrow;
}  

void DocumentManager::returnDocument(int docid, int patronID){
    Patron* temp_patron = patrons[patronID];
    temp_patron->removeDoc();    
}
