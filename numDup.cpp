#include<iostream>
using namespace std;



int numDup(int arr[], int start, int size, int element){
    if (start == size) return 0;
    return (arr[start] == element) + numDup(arr, start+1, size, element);

}