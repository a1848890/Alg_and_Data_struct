#include"ReduceGeneric.h"
#include<vector>

using std::vector;

ReduceGeneric :: ReduceGeneric(){}

/*
int ReduceGeneric :: reduce(vector<int> before_reduce){
    // no matter how the virtual function will be implement in the derived class, we
    // know that they will return an integer to us.
    int final_result = 0;
    for(int i=0; i<before_reduce.size()-1; i++){
        final_result = binaryOperator(before_reduce.at(i), before_reduce.at(i+1));
    }

    return final_result;
}
*/


int ReduceGeneric :: reduce(vector<int> before_reduce){
/*
    if (before_reduce.size() == 1) return before_reduce[0];
    
    int before_reduce_at_zero = before_reduce.at(0);
    before_reduce.pop_back();
    return binaryOperator(before_reduce_at_zero, reduce(before_reduce));
*/




    int result = before_reduce.at(0);
    for (int i = 1; i < before_reduce.size(); i++){
        result = binaryOperator(before_reduce.at(i), result);
        if(result == 1) return 1;
    }
  return result;
}
