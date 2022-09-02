#include"FilterGeneric.h"
#include<vector>

using std::vector;

FilterGeneric :: FilterGeneric(){}

vector<int> FilterGeneric :: filter(vector<int> before_filter){
    vector<int> v_target;
    for (int i=0; i<before_filter.size(); i++){
        if ( g(before_filter.at(i)) ) v_target.push_back(before_filter.at(i));
    }
    return v_target;
}