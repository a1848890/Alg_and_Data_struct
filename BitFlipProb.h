#pragma once
#include"Individual.h"
#include"Mutator.h"
#include<string>

class BitFlipProb : public Mutator{
    private:
        double _probability;
    public:
        BitFlipProb();
        BitFlipProb(double probability);
        Individual* mutate(Individual *new_individual, int k);

        ~BitFlipProb();
};

