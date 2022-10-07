
// C++ Implementation of the Quick Sort Algorithm.
#include <iostream>
#include<vector>
using std::vector;

using namespace std;
/*

int partition(vector<int>& arr, int start, int end)
{ 

    int pivot = arr[start]; 
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }
 
    // Giving pivot element its correct position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);
 
    // Sorting left and right parts of the pivot element
    int i = start, j = end;
 
    while (i < pivotIndex && j > pivotIndex) {
 
        while (arr[i] <= pivot) {
            i++;
        }
 
        while (arr[j] > pivot) {
            j--;
        }
 
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
 
    return pivotIndex;
}

void quickSort(vector<int>& arr, int start, int end)
{
 
    // base case
    if (start >= end)
        return;
 
    // partitioning the array
    int p = partition(arr, start, end);
 
    // Sorting the left part
    quickSort(arr, start, p - 1);
 
    // Sorting the right part
    quickSort(arr, p + 1, end);
}


vector<int> helper_quicksort(vector<int> v){
    quickSort(v, 0, v.size()-1);
    return v;
}




*/









////////////////////////////////////////////////////////
////////////////////////////////////////////////////////
/*

int partition(vector<int>& arr, int start, int end)
{ 
    int pivot;
    if (arr.size() >= 3) pivot = arr[start+2];
    else pivot = arr[start];
    //int pivot = arr[start]; 
    
    
    
    
    int count = 0;
    if (arr.size() >=3 ){
        for (int i = start + 3; i <= end; i++) {
            if (arr[i] <= pivot)
                count++;
        }
    }
    else {
        for (int i = start+1; i <= end; i++) {
            if (arr[i] <= pivot)
                count++;
        }
    }
 
    int pivotIndex;

    // Giving pivot element its correct position
    pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);
 
    // Sorting left and right parts of the pivot element
    int i = start, j = end;
 
    while (i < pivotIndex && j > pivotIndex) {
 
        while (arr[i] <= pivot) {
            i++;
        }
 
        while (arr[j] > pivot) {
            j--;
        }
 
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
 
    return pivotIndex;
}

void quickSort(vector<int>& arr, int start, int end)
{
 
    // base case
    if (start >= end)
        return;
 
    // partitioning the array
    int p = partition(arr, start, end);
 
    // Sorting the left part
    quickSort(arr, start, p - 1);
 
    // Sorting the right part
    quickSort(arr, p + 1, end);
}


vector<int> helper_quicksort(vector<int> v){
    quickSort(v, 0, v.size()-1);
    return v;
}



int main()
{ 
    vector<int> arr = { 1, 3, 5, 4, -5, 100, 7777, 2014};
    vector<int> after_sort = helper_quicksort(arr); 
 
    for (int i = 0; i < after_sort.size(); i++) {
        cout << after_sort[i] << " ";
    }

    return 0;
}

*/