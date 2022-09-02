#include<iostream>
#include<algorithm>
#include<vector>
#include"ReduceGeneric.h"
#include"ReduceMinimum.h"
#include"ReduceGCD.h"

using std::__algo_gcd;
using std::vector;
using std::cout;
using std::endl;

int main(){
    ReduceGCD ReduceGCD_class;
    ReduceMinimum ReduceMinimum_class;

    vector<int> test_v;
    test_v.push_back(3);  
    test_v.push_back(4);
    test_v.push_back(8);
    test_v.push_back(12);
    test_v.push_back(24);
    test_v.push_back(25);
    test_v.push_back(222);
    test_v.push_back(3333);
    test_v.push_back(-12);
    test_v.push_back(2);
    test_v.push_back(-1444); 

    cout << "ReduceGCD : " <<  ReduceGCD_class.reduce(test_v) << endl;
    cout << "ReduceMinimum : " <<  ReduceMinimum_class.reduce(test_v) << endl;

    return 0;
}