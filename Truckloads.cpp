#include"TruckLoad.h"

Truckloads :: Truckloads(){}


int Truckloads :: numTrucks(int numCrates, int loadSize){
    // Base case: 
        if (loadSize >= numCrates) return 1;
		return numTrucks(numCrates/2 + numCrates%2, loadSize) + numTrucks(numCrates/2, loadSize);
//    if (numCrates % 2 == 0) return numTrucks(numCrates, loadSize) + numTrucks(numCrates, loadSize);
    
//    if (numCrates % 2 == 1) return numTrucks(numCrates, loadSize) + numTrucks(numCrates+1, loadSize);

}


