#include <vector>
#include <queue>

int kth_largest(std::vector<int> values, int k){
    std::priority_queue<int> pq;
    for(auto& i: values){
        pq.push(i);
    }

    if(k>1){
        for (int i = 0; i < k-1; i++){
            pq.pop();
        }
    }
    return pq.top();
}
