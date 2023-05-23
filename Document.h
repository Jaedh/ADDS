#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>

class Document{
    private:
        std::string name;
        int ID;
        int licence_limit;
        int borrowed;
    public:
        Document();
        Document(std::string _name, int _ID, int _licence_limit);
        ~Document();

        std::string getName();
        int getID();
        int getLicence_limit();
        bool borrow();
        bool Return();
};

#endif