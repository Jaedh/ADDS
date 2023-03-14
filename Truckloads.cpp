#include "Truckloads.h"
#include <math.h>

Truckloads::Truckloads(){

}

int Truckloads::numTrucks(int numCrates, int loadSize){
    if(numCrates <= loadSize){
        return 1;
    }

    int result = floor(numCrates/2);

    return numTrucks(result, loadSize) + numTrucks(result + numCrates%2, loadSize); 
}

Truckloads::~Truckloads(){

}