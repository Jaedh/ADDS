#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int n){
    // if(list[0]==n){
    //     return true;
    // }else if(list[0]!=n){
    //     return false;
    // }

    // int index = ((list.size()-1)/2);
    // if(n<list.at(index)){
    //     search(std::vector<int>(list.begin(),list.begin()+index-1),n);
    // }else{
    //     search(std::vector<int>(list.begin()+index, list.begin()+list.size()-1),n);
    // }
    return searchRec(list, n, 0, list.size()-1);
}

bool RecursiveBinarySearch::searchRec(std::vector<int> list, int n, int left, int right){
    if(left > right){
        return false;
    }

    int index = (left+right)/2;
    if(list[index]==n){
        return true;
    }else if(list[index]>n){
        return searchRec(list, n, left, index-1);
    }else{
        return searchRec(list, n, index+1, right);
    }
}
