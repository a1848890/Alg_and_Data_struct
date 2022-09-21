#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H
#include <iostream>
#include <string>
#include "Individual.h"
#include "Mutator.h"

using namespace std;

class BitFlipProb:public Mutator{
private:
    double p;
public:
    BitFlipProb();
    BitFlipProb(double chance);
    Individual* mutate(Individual* i, int k);
    ~BitFlipProb();
};
#endif