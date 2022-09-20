#pragma once
#include"Individual.h"
#include"Mutator.h"
#include<string>

class BitFlipProb : public Mutator{
    private:
        double p;
    public:
        bool flipOrNo(double x);
        BitFlipProb(double x);
        Individual* mutate(Individual *new_individual, int k);

};

