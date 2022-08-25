#include<vector>
#include"EfficientTruckloads.h"

using std::vector;

EfficientTruckloads :: EfficientTruckloads(){}


int EfficientTruckloads :: mem_truckloads(int numCrates, int loadSize){
    
    static vector<int> truckTable(10000, -1);
    if (loadSize >= numCrates) {
        truckTable.at(numCrates) = 1;
        return 1;
    }

    truckTable.at(numCrates) = mem_truckloads(numCrates/2 + numCrates%2, loadSize) + mem_truckloads(numCrates/2, loadSize);

    return truckTable.at(numCrates);

}
