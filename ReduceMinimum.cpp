#include"ReduceGeneric.h"
#include"ReduceMinimum.h"


ReduceMinimum :: ReduceMinimum(){}


int ReduceMinimum :: binaryOperator(int x, int y){
    return (x<y) ? x:y;
}
