#pragma once
#include"Individual.h"
#include"Mutator.h"

class BitFlip : public Mutator{
    
    public:
        BitFlip();
        Individual mutate(Individual new_individual, int k);
        ~BitFlip();
};

