#ifndef BITFLIP_H
#define BITFLIP_H
#include <iostream>
#include <string>
#include "Individual.h"
#include "Mutator.h"

using namespace std;

class BitFlip:public Mutator{
private:
    int length;
    int position;
public:
    BitFlip();
    Individual* mutate(Individual* i, int k);
    ~BitFlip();
};
#endif
