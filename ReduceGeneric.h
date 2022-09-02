#pragma once
#include<vector>

using std::vector;

class ReduceGeneric{
    protected:
        virtual int binaryOperator(int x, int y) = 0;
    public:
        ReduceGeneric();
        int reduce(vector<int> before_reduce);
};
