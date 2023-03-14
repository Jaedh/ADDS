#include <iostream>
#include "Reverser.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"

int main(void){
    Reverser* r = new Reverser();

    std::cout<<r->reverseDigit(-99991)<<std::endl;
    std::cout<<r->reverseString("1234567890")<<std::endl;

    Truckloads* truck = new Truckloads();
    std::cout<<truck->numTrucks(1024,5)<<std::endl;

    EfficientTruckLoads* ef = new EfficientTruckLoads();
    std::cout<<ef->numTrucks(1024,5)<<std::endl;
}
