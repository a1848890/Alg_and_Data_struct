#include<vector>
#include"EfficientTruckloads.h"

using std::vector;

EfficientTruckloads :: EfficientTruckloads(){}


int EfficientTruckloads :: numTrucks(int numCrates, int loadSize){
    
    static vector<int> truckTable(10000, -1);
    if (loadSize >= numCrates) {
        truckTable.at(numCrates) = 1;
        return 1;
    }
    
    
    truckTable.at(numCrates) = numTrucks(numCrates/2 + numCrates%2, loadSize) + numTrucks(numCrates/2, loadSize);
    return truckTable.at(numCrates);

}