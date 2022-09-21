#ifndef REARRANGE_H
#define REARRANGE_H
#include <iostream>
#include <string>
#include "Individual.h"
#include "Mutator.h"

using namespace std;

class Rearrange:public Mutator{
private:
    int len;
    int spot;
public:
    Rearrange();
    Individual* mutate(Individual* i, int k);
    ~Rearrange();
};
#endif