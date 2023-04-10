#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int n){
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
