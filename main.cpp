#include <iostream>
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <vector>
#include <string.h>
#include <sstream>

using namespace std;

int main(void){
    Sort* quickSort = new QuickSort();
    RecursiveBinarySearch* binarysearch = new RecursiveBinarySearch();

    vector<int> list;
    string input;

    getline(cin, input);
    stringstream ss(input);

    int i;
    while(ss >> i){
        list.push_back(i);
    }

    vector<int> result = quickSort->sort(list);
    cout<<binarysearch->search(result,1)<<" ";

    for(auto& i : result){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}

    // std::vector<int> a = {1,3,5,4,-5,100,7777,2014,0};

    // Sort* tool = new BubbleSort();
    // Sort* tool2 = new QuickSort();
    // RecursiveBinarySearch* tool3 = new RecursiveBinarySearch();

    // std::vector<int> result1 = tool->sort(a);
    // for(auto& i : result1){
    //     std::cout<<i<<" ";
    // }
    // std::cout<<std::endl;

    // std::vector<int> result2 = tool2->sort(a);
    // for(auto& i : result2){
    //     std::cout<<i<<" ";
    // }
    // std::cout<<std::endl;

    // std::cout<<tool3->search(result1,6789)<<std::endl;