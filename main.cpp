#include <iostream>
#include "Heap.tpp"
#include <vector>

using namespace std;

int main(void){

    std::vector<int> values = {1,2,3,4,5};
    Heap<int> * h = new Heap<int>(values);
    h->insert(10);
    h->insert(-1);
    cout<<h->getMin()<<endl;

}
