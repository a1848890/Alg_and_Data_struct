
#include"Individual.h"
#include"Mutator.h"
#include"BitFlip.h"

BitFlip :: BitFlip(){}

Individual BitFlip :: mutate(Individual new_individual, int k){
    int index = k%(new_individual.getLength()) -1;
    new_individual.flipBit(index);

    Individual *after_change = new Individual(new_individual.getString());

    return *after_change;
}


BitFlip :: ~BitFlip(){}
