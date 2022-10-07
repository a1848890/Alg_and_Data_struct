#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include "Sort.h"

using namespace std;

class QuickSort:public Sort{
private:
    std::vector<int> storage; 
public:
    QuickSort();
    vector<int> sort(vector<int> list);
    ~QuickSort();
};
#endif