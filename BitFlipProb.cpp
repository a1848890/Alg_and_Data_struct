
#include"Individual.h"
#include"Mutator.h"
#include"BitFlipProb.h"
#include<string>

BitFlipProb :: BitFlipProb(double x) {
    p = x;
}

bool BitFlipProb :: flipOrNo(double x){
    return rand()%100 < (x*100);
}

Individual* BitFlipProb :: mutate(Individual *new_individual, int k){
    p = 0.8;
    for (int i=0; i< (new_individual->getLength());i++){
        if (flipOrNo(p)) {
            new_individual->flipBit(i);
        }
    }
    return new_individual;
}

