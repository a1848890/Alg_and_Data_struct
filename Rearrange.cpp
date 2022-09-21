#include "Rearrange.h"
#include <iostream>
#include <string>
#include "Individual.h"
#include "Mutator.h"

using namespace std;

Rearrange::Rearrange(){

}

Individual* Rearrange::mutate(Individual* i, int k){
    len = i->getLength();
    spot = k % len;
    if (spot == 0){
        spot = len - 1;
    }else{
        spot = spot - 1;
    }

    //cout << "rearragneBit" << endl;
    i->rearrangeBit(spot);

    return i;
    
}

Rearrange::~Rearrange(){

}