#include"ReduceGeneric.h"
#include<vector>

using std::vector;

ReduceGeneric :: ReduceGeneric(){}

int ReduceGeneric :: reduce(vector<int> before_reduce){
    // no matter how the virtual function will be implement in the derived class, we
    // know that they will return an integer to us.
    int final_result = 0;
    for(int i=0; i<before_reduce.size()-1; i++){
        final_result = binaryOperator(before_reduce.at(i), before_reduce.at(i+1));
    }

    return final_result;
}


