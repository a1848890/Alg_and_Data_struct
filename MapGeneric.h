#pragma once
#include<vector>

using std::vector;

class MapGeneric{
    protected:
        vector<int> _v;
        virtual int f(int x) = 0;
    public:
    MapGeneric();
    vector<int> map(vector<int> vec_before_map);
};


