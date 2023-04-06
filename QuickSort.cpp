#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list){
    sortRec(list,0,list.size()-1);
    return list;
}

void QuickSort::sortRec(std::vector<int>& list, int start, int end){
    if(start >= end){
        return;
    }

    int pivot = list.at(end);

    int pivot_index = start;
    for (int i = start; i < end; i++){
        if(list.at(i) < pivot){
            std::swap(list[i], list[pivot]);
        }
    }
    std::swap(pivot, pivot_index);

    sortRec(list, start, pivot_index-1);
    sortRec(list, pivot_index+1, end);
}