#ifndef ADT_H
#define ADT_H

#include <vector>
#include <cstdlib>

template <class T>

class ADT{
    private:
        std::vector<T> list;
        T first;
        T last;
    public:
        ADT(){}
        ~ADT(){}
        void add(T item){
            list.push_back(item);
        }
        void remove(int index){
            if(list.size()>index){
                list.erase(list.begin()+index);
            }
        }
        std::vector<T> returnVal(){
            return list;
        }
};

#endif