#include<iostream>
using namespace std;
int numDup(int arr[], int start, int size, int element);


int main(){
    int arr[7] = {1,2,2,3,4,5,5};
    cout << numDup(arr, 2, 7, 3) << endl;
    cout << numDup(arr, 0, 7, 5) << endl;
    cout << numDup(arr, 0, 7, 2) << endl;
    return 0;
}


int numDup(int arr[], int start, int size, int element){
    if (start == size) return 0;
    return (arr[start] == element) + numDup(arr, start+1, size, element);

}