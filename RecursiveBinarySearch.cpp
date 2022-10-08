#include<vector>
#include"RecursiveBinarySearch.h"

using std::vector;

RecursiveBinarySearch :: RecursiveBinarySearch(){}


bool RecursiveBinarySearch :: helper_search(std::vector<int> v, int obj, int start, int end ){
    if (start > end) return false;
     if (v[(start+end)/2] == obj) return true;
     else if (obj < v[(start+end)/2]) return helper_search(v, obj, start, (start+end)/2-1);
     else  return helper_search(v, obj, (start+end)/2+1, end);
}




bool RecursiveBinarySearch :: search(std::vector<int> v, int obj){
    return helper_search(v, obj, 0, v.size());
}
