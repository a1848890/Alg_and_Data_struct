#pragma once
#include<vector>

using std::vector;


class RecursiveBinarySearch{
    private:

    public:
        RecursiveBinarySearch();
        bool search(std::vector<int> v, int n);
        bool helper_search(std::vector<int> v, int obj, int start, int end );
};
