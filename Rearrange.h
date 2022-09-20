#pragma once
#include"Individual.h"
#include"Mutator.h"
#include<string>

class Rearrange : public Mutator{
    public:
        Rearrange();
        Individual* mutate(Individual *new_individual, int k);

};

