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
    bool resulttrue =binarysearch->search(result,1);
    if(resulttrue == true){
        cout<<"true"<<" ";
    }else{
        cout<<"false"<<" ";
    }

    for(auto& i : result){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}