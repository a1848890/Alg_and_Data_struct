#pragma once
#include<algorithm>
#include"ReduceGeneric.h"

class ReduceGCD : public ReduceGeneric{
    public:
        ReduceGCD();
        int binaryOperator(int x, int y);
};