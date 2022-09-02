#pragma once
#include"ReduceGeneric.h"

class ReduceMinimum : public ReduceGeneric{
    public: 
        ReduceMinimum();
        int binaryOperator(int x, int y);
};
