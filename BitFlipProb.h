#pragma once
#include"Individual.h"
#include"Mutator.h"
#include<string>

class BitFlipProb : public Mutator{
    private:
        double _probability;
    public:
        bool flip(double probablity);
        BitFlipProb(double probability);
        Individual* mutate(Individual *new_individual, int k);

        ~BitFlipProb();
};

