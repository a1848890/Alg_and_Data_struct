#include"MapGeneric.h"
#include"MapTriple.h"
#include"MapSquare.h"
#include"MapAbsoluteValue.h"

#include<iostream>
#include<vector>

using std:: vector;
using std::cout;
using std::endl;


int main(){
    // set the mother vector and push back values in it
    vector<int> my_vector;
    my_vector.push_back(2);
    my_vector.push_back(3);
    my_vector.push_back(4);
    my_vector.push_back(5);
    my_vector.push_back(6);
    my_vector.push_back(-1);

    MapTriple map_triple;
    vector<int> triple_list =  map_triple.map(my_vector);

    cout << "After map : ";
    for(int i=0; i<triple_list.size(); i++){
        cout << triple_list.at(i) << "  ";
    }
    cout << endl;


    MapSquare map_square;
    vector<int> square_list = map_square.map(my_vector);
    cout << "After map : ";
    for (int i=0; i<square_list.size(); i++){
        cout << square_list.at(i) << "  "; 
    }
    cout << endl;


    MapAbsoluteValue map_abs;
    vector<int> abs_list = map_abs.map(my_vector);
    cout << "After map : ";
    for (int i=0; i<abs_list.size(); i++){
        cout << abs_list.at(i) << "  ";
    }
    cout << endl;

    return 0;
}
