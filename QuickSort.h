#pragma once
#include"Sort.h"
#include<vector>

using std::vector;

class QuickSort : public Sort{
    private:
    public:
        QuickSort();
        std::vector<int> sort(std::vector<int> list);
        int helper_partition(std::vector<int>& list, int start, int end);
        void helper_quickSort(vector<int>& list, int start, int end);
};
