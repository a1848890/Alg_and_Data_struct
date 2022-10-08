#include"Sort.h"
#include"BubbleSort.h"
#include"QuickSort.h"
#include"RecursiveBinarySearch.h"

#include<vector>
#include<iostream>

using std::vector;
using namespace std;



    int main(){
/*   
    BubbleSort my_bubblesort;

    vector<int> v = {5,1,2,3,90, -12, -2, -11, 90, 1, 1000};
    vector<int> bubblesorted_v = my_bubblesort.sort(v);
    
    cout << "After bubbleSort: " ;
    for (int i=0; i<bubblesorted_v.size(); i++){
        cout << bubblesorted_v.at(i) << " ";
    }
    cout << "           ########## Bubble Sort test end ##########\n";



    vector<int> v1 = {99,8,7,6,5,-4,33,23,-13,1,4};

    QuickSort my_quicksort;
    vector<int> after_sort = my_quicksort.sort(v1);
    
    for (int i=0; i<after_sort.size(); i++){
        std::cout << after_sort.at(i) << endl;
    }

    cout << "############Test Quicksort end ############\n";

    RecursiveBinarySearch my_search;
    // we must conduct binary seaarch to a sorted array
    bool search_1 = my_search.search(after_sort, 1);
    bool search_99 = my_search.search(after_sort, 99);
    bool search_not_found = my_search.search(after_sort, 7);
    bool search_not_found1 = my_search.search(after_sort, 0);

    cout << search_1 << endl;
    cout << search_99 << endl;
    cout << search_not_found << endl;
    cout << search_not_found1 << endl;
    cout << "############Test Recursive binary search end ############\n";

*/
    BubbleSort my_bubbleSort;
    QuickSort my_quicksort;
    RecursiveBinarySearch my_recursivebinarysearch;

    vector<int> v;
    int input;
    while(cin>>input){
        v.push_back(input);
    }

    vector<int> sorted_v = my_quicksort.sort(v);
    bool _found = my_recursivebinarysearch.search(sorted_v, 1);
    if (_found) cout << "true ";
    else cout << "false";




/*
    vector<int> v1 = { 1, 3, 5, 4, -5, 100, 7777, 2014, 0};
    vector<int> v1_sorted = my_quicksort.sort(v1);
    bool _found = my_recursivebinarysearch.search(v1_sorted, 1);
    if (_found) cout << "true "; 
    else cout << "false ";

    for (int i=0; i<v1_sorted.size(); i++){
        cout << v1_sorted[i] << " ";
    }
    cout << endl;


    vector<int> v2 = {0,3,5,4,-5,100,7777,2014};
    vector<int> v2_sorted = my_quicksort.sort(v2);
    bool _found1 = my_recursivebinarysearch.search(v2_sorted, 1);
    if (_found1) cout << "true "; 
    else cout << "false ";

    for (int i=0; i<v2_sorted.size(); i++){
        cout << v2_sorted[i] << " ";
    }
    cout << endl;


    vector<int> v3 = { -5, -8, -4, -2, -1};
    vector<int> v3_sorted = my_quicksort.sort(v3);
    bool _found3 = my_recursivebinarysearch.search(v3_sorted, 1);
    if (_found3) cout << "true ";
    else cout << "false ";
    for (int i=0; i<v3_sorted.size(); i++){
        cout << v3_sorted[i] << " ";
    }
    cout << endl;

    // testing hidden test:
    vector<int> v4 = { -5};
    vector<int> v4_sorted = my_quicksort.sort(v4);
    bool _found4 = my_recursivebinarysearch.search(v4_sorted, 1);
    if (_found4) cout << "true ";
    else cout << "false ";
    for (int i=0; i<v4_sorted.size(); i++){
        cout << v4_sorted[i] << " ";
    }
    cout << endl;

    vector<int> v5 = { 1, 2 ,3 ,4, 5};
    vector<int> v5_sorted = my_quicksort.sort(v5);
    bool _found5 = my_recursivebinarysearch.search(v5_sorted, 1);
    if (_found5) cout << "true ";
    else cout << "false ";
    for (int i=0; i<v5_sorted.size(); i++){
        cout << v5_sorted[i] << " ";
    }
    cout << endl;
*/

    return 0;
}