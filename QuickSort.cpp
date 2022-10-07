#include"Sort.h"
#include"QuickSort.h"
#include<vector>
#include<iostream>

using std::vector;

QuickSort :: QuickSort(){}

int QuickSort :: helper_partition(std::vector<int>& list, int start, int end){
 
    int pivot = list[start];
 
    int count = 0;
    for (int i = start+1; i <= end; i++) {
        if (list[i] <= pivot)
            count++;
    }
 
    // Giving pivot element its correct position
    int pivotIndex = start + count;
    std::swap(list[pivotIndex], list[start]);
 
    // Sorting left and right parts of the pivot element
    int i = start, j = end;
 
    while (i < pivotIndex && j > pivotIndex) {
 
        while (list[i] <= pivot) {
            i++;
        }
 
        while (list[j] > pivot) {
            j--;
        }
 
        if (i < pivotIndex && j > pivotIndex) {
            std::swap(list[i++], list[j--]);
        }
    }
    return pivotIndex;
}

void QuickSort :: helper_quickSort(vector<int>& list, int start, int end){

    // base case
    if (start >= end)
        return;
 
    // partitioning the array
    int p = helper_partition(list, start, end);
 
    // Sorting the left part
    helper_quickSort(list, start, p - 1);
 
    // Sorting the right part
    helper_quickSort(list, p + 1, end);
}

std::vector<int> QuickSort :: sort(std::vector<int> list){
    helper_quickSort(list, 0, list.size()-1);
    return list;
}

