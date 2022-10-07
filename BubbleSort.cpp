#include"BubbleSort.h"
#include<vector>
#include"Sort.h"

using std::vector;
using std::swap;


BubbleSort :: BubbleSort(){}

// Diagram : 3 1 2 0 -12 99 32 -1 199 2 


std::vector<int> BubbleSort :: sort(std::vector<int> list){
    int length = list.size();
    for (int j=length; j>0; j--){
        for (int i=0; i<j-1; i++){
            if (list.at(i) > list.at(i+1)) std::swap(list.at(i), list.at(i+1));
        }
    }

    return list;
}