#include"MapGeneric.h"
#include<vector>

using std::vector;

MapGeneric :: MapGeneric(){
    _v.push_back(0);
}


vector<int> MapGeneric :: map(vector<int> vec_before_map){
    int vector_size = vec_before_map.size();
    _v.at(0) = f(vec_before_map.at(0)); 
    for (int i=1; i<vector_size; i++){
       _v.push_back(f(vec_before_map.at(i)));
    }

    return _v;
}
