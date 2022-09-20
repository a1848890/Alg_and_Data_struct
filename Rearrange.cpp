
#include"Individual.h"
#include"Mutator.h"
#include"Rearrange.h"
#include<string>

Rearrange :: Rearrange(){}

Individual Rearrange :: mutate(Individual new_individual, int k){
    int index = k%(new_individual.getLength()) - 1;
    int offset_length = index; // 2
    int rest_length = new_individual.getLength() - offset_length; // 3

    //int string_length = new_individual->getLength();//string length

    std::string new_string = new_individual.getString();

    std::string before_change = new_individual.getString();
    for (int i=0; i<rest_length; i++){
        new_string[i] = before_change[index+i];
    }

    
    for (int j=0; j<offset_length; j++){
        new_string[rest_length+j] = before_change[j];
    }

    Individual* after_change = new Individual(new_string);

    return *after_change;
}


Rearrange :: ~Rearrange(){}
