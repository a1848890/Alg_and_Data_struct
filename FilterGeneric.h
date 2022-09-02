#pragma once
#include<vector>

using std :: vector;

class FilterGeneric{
    protected:
        virtual bool g(int x) = 0;
    public:
        FilterGeneric();
        vector<int> filter(vector<int> before_filter);
};

