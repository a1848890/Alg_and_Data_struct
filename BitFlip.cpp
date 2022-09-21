#include "BitFlip.h"
#include <iostream>
#include <string>
#include "Individual.h"
#include "Mutator.h"

using namespace std;

BitFlip::BitFlip(){

}

Individual* BitFlip::mutate(Individual* i, int k){
    length = i->getLength();
    position = k % length;

    //cout << "position: " << position << endl;

    if (position == 0){
        position = length - 1;
    }else{
        position = position - 1;
    }

    

    i->flipBit(position);
    
    return i;
}

BitFlip::~BitFlip(){

}