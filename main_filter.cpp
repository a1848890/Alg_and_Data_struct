#include"FilterGeneric.h"
#include"FilterForTwoDigitPositive.h"
#include"FilterOdd.h"
#include"FilterNonPositive.h"
#include<vector>
#include<iostream>

using std::vector;
using std::cout;
using std::endl;


int main(){
    vector<int> my_vec;
    my_vec.push_back(2);
    my_vec.push_back(33);
    my_vec.push_back(4);
    my_vec.push_back(0);
    my_vec.push_back(-1);
    my_vec.push_back(2);
    my_vec.push_back(-23);

    FilterForTwoDigitPositive two_digit_positive;
    FilterNonPositive non_positive;
    FilterOdd _odd;

    vector<int> test_v1 = two_digit_positive.filter(my_vec);
    vector<int> test_v2 = non_positive.filter(my_vec);
    vector<int> test_v3 = _odd.filter(my_vec);


    for (int i=0; i<test_v1.size(); i++){
        cout << test_v1.at(i) << "  ";
    }
    cout << endl;


    for (int i=0; i<test_v2.size(); i++){
        cout << test_v2.at(i) << "  ";
    }
    cout << endl;
    

    for (int i=0; i<test_v3.size(); i++){
        cout << test_v3.at(i) << "  ";
    }
    cout << endl;


}