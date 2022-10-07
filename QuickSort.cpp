#include "QuickSort.h"

using namespace std;

QuickSort::QuickSort(){

}

vector<int> QuickSort::sort(vector<int> list){

    vector<int> lessList;
    vector<int> equal;
    vector<int> greaterList;

    if (list.size() > 2){
        int pivot = list.at(2);
        //cout << pivot << endl;
        for (int i = 0; i < list.size(); i++){
            if (list.at(i) < pivot){
                lessList.push_back(list.at(i));
            }else if (list[i] > pivot){
                greaterList.push_back(list.at(i));
            }else{
                equal.push_back(list.at(i));
            }
            
        }
        vector<int> sorted_less = sort(lessList);   
        vector<int> sorted_greater = sort(greaterList);
        vector<int> sorted;   
        sorted.reserve(sorted_less.size() + equal.size() + sorted_greater.size());
        sorted.insert(sorted.end(), sorted_less.begin(), sorted_less.end());   
        sorted.insert(sorted.end(), equal.begin(), equal.end());   
        sorted.insert(sorted.end(), sorted_greater.begin(), sorted_greater.end());   
        
        return sorted;
    }else if (list.size() == 2){
        if (list.at(0) > list.at(1)){
            swap(list.at(0), list.at(1));
        }
    }
    return list;
}

QuickSort::~QuickSort(){

}