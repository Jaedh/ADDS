#include "Document.h"

Document::Document(){
    name = "";
    ID = 0;
    licence_limit = 0;
    borrowed = 0;
}

Document::Document(std::string _name, int _ID, int _licence_limit){
    name = _name;
    ID = _ID;
    licence_limit = _licence_limit;
    borrowed = _licence_limit;
}

Document::~Document(){

}

std::string Document::getName(){
    return name;
}

int Document::getID(){
    return ID;
}

int Document::getLicence_limit(){
    return licence_limit;
}

bool Document::borrow(){
    borrowed-=1;
    if(borrowed<0){
        borrowed = 0;
        return false;
    }
    return true;
}

bool Document::Return(){
    borrowed+=1;
    if(borrowed>licence_limit){
        borrowed = licence_limit;
        return false;
    }
    return true;
}

