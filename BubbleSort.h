#pragma once
#include"Sort.h"
#include<vector>

using std::vector;

class BubbleSort : public Sort{
    private:
    public:
        BubbleSort();
        std:: vector<int> sort(std::vector<int> list);
};
