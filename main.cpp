#include <iostream>
#include "BubbleSort.h"
#include "QuickSort.h"
#include <vector>

int main(void){
    std::vector<int> a = {1,3,5,4,-5,100,7777,2014,0};

    Sort* tool = new BubbleSort();
    Sort* tool2 = new QuickSort();

    std::vector<int> result1 = tool->sort(a);
    for(auto& i : result1){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;

    std::vector<int> result2 = tool2->sort(a);
    for(auto& i : result2){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}