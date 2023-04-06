#include <iostream>
#include "BubbleSort.h"
#include <vector>

int main(void){
    std::vector<int> a = {1,3,5,4,-5,100,7777,2014};

    Sort* tool = new BubbleSort();

    std::vector<int> result1 = tool->sort(a);
    for(auto& i : result1){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}