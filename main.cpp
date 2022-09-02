#include"FilterGeneric.h"
#include"FilterForTwoDigitPositive.h"
#include"FilterNonPositive.h"
#include"FilterOdd.h"
#include"MapGeneric.h"
#include"MapSquare.h"
#include"MapAbsoluteValue.h"
#include"MapTriple.h"
#include"ReduceGeneric.h"
#include"ReduceMinimum.h"
#include"ReduceGCD.h"

#include<string>
#include<vector>
#include<iostream>

using std::vector;
using namespace std;

int main(){
    MapTriple the_mapTriple;
    MapAbsoluteValue the_mapAbsoluteValue;

    vector<int> v1 = { 6, -11, 53, -16, 73, 128, 105, 104, -71, -179, 102, 12, 21, -145, -99, 199,-156, -186, 43, -189};
    vector<int> after_two_map = the_mapTriple.map(the_mapAbsoluteValue.map(v1));
    
    /*
    for(int i=0; i<20; i++){
        cout << after_two_map.at(i) << " ";
    }
    */

    FilterForTwoDigitPositive the_FilterForTwoDigitPositive;
    FilterOdd the_FilterOdd; 

    vector<int> after_two_filter =   the_FilterOdd.filter( the_FilterForTwoDigitPositive.filter(after_two_map) ) ;
    /*
    for(int i=0; i<after_two_filter.size(); i++){
        cout << after_two_filter.at(i) << " ";
    }
    */

    ReduceGCD the_ReduceGCD;
    ReduceMinimum the_ReduceMinimum;

    vector<int> after_two_reduce;
    int _gcd = the_ReduceGCD.reduce(after_two_filter);
    int _minimum = the_ReduceMinimum.reduce(after_two_filter);

    after_two_reduce.push_back(_gcd);
    after_two_reduce.push_back(_minimum);


    for(int i=0; i<after_two_reduce.size(); i++){
        cout << after_two_reduce.at(i) << " " ;
    }
    
    cout <<"\n";

    return 0;
}