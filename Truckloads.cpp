#include"Truckloads.h"

Truckloads :: Truckloads(){}


int Truckloads :: numTrucks(int numCrates, int loadSize){
	if (numCrates < 1) return 0;
	
	// Base case: 
        if (loadSize >= numCrates && numCrates>0) return 1;

	return numTrucks(numCrates/2 + numCrates%2, loadSize) + numTrucks(numCrates/2, loadSize);
//    if (numCrates % 2 == 0) return numTrucks(numCrates, loadSize) + numTrucks(numCrates, loadSize);
    
//    if (numCrates % 2 == 1) return numTrucks(numCrates, loadSize) + numTrucks(numCrates+1, loadSize);

}


