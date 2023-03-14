#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H

#include <vector>
#include <map>

class EfficientTruckLoads{
    private:
        std::map<int,int> values;
    public:
        EfficientTruckLoads();
        int numTrucks(int numCrates, int loadSize);
        ~EfficientTruckLoads();
};

#endif