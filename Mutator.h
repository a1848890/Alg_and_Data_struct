#pragma once
#include"Individual.h"
#include<string>

using std::string;


class Mutator{
    private:
          
    public:
        Mutator();
        virtual Individual* mutate(Individual *new_individual, int k) = 0;
};
