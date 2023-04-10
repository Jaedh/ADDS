#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list){
    std::vector<int> result = list;
    sortRec(result,0,list.size()-1);
    return result;
}

void QuickSort::sortRec(std::vector<int>& list, int start, int end){
    int pivot;
    int pivot_index;     

    if(start < end){
        pivot = list[end];
        pivot_index = start-1; 
        for (int i = start; i <= end-1; i++){
            if(list[i] < pivot){
                pivot_index++;
                std::swap(list[i], list[pivot_index]);
            }
        }               
        std::swap(list[end], list[pivot_index+1]);
        sortRec(list, start, pivot_index);
        sortRec(list, pivot_index+2, end);
    }
}
