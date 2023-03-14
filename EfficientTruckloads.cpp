#include "EfficientTruckloads.h"
#include <math.h>

EfficientTruckLoads::EfficientTruckLoads(){

}

int EfficientTruckLoads::numTrucks(int numCrates, int loadSize){
    if(numCrates <= loadSize){
        return 1;
    }

    int result = floor(numCrates/2);

    if(values.find(numCrates)!=values.end()){
        return values[numCrates];
    }else{
        values[numCrates] = numTrucks(result, loadSize) + numTrucks(result + numCrates%2, loadSize);
    }

    return values[numCrates];     
}

EfficientTruckLoads::~EfficientTruckLoads(){

}