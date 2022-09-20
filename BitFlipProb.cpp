
#include"Individual.h"
#include"Mutator.h"
#include"BitFlipProb.h"
#include<string>
#include<random>
#include<cstdlib>
#include<ctime>


BitFlipProb :: BitFlipProb(){}

BitFlipProb :: BitFlipProb(double probability) : _probability(probability){}

Individual BitFlipProb :: mutate(Individual new_individual, int k){
    for (k=0; k<new_individual.getLength(); k++){
        bool flip = (rand() % 100 + 1) < 100*_probability;
        if (flip) new_individual.flipBit(k);
    }

    Individual *after_change = new Individual(new_individual.getString());

    return *after_change;
}


BitFlipProb :: ~BitFlipProb(){}
