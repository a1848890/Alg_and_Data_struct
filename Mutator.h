#ifndef MUTATOR_H
#define MUTATOR_H
#include <iostream>
#include <string>
#include "Individual.h"

using namespace std;

class Mutator{
public:
    virtual Individual* mutate(Individual* i, int k) = 0;
};
#endif