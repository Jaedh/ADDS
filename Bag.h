#ifndef BAG_H
#define BAG_H

#include <vector>
#include <cstdlib>

template <class T>

class Bag{
    private:
        std::vector<T> items;
    public:
        Bag(){}
        ~Bag(){}
        void addItem(T item){
            items.push_back(item);
        }
        void removeItem(){
            int index = rand() % (items.size()+1);
            items.erase(items.begin()+index);
        }
        std::vector<T> Returnitems(){
            return items;
        }
};

#endif