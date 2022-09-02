#include<vector>
#include<iostream>

using std::vector;
using namespace std;

int main(){
    vector<int> v1 = {1,2,3,4,5,6,7,8,9};
    v1.resize(5);
    for(int i=0; i<v1.size(); i++){
        cout << v1.at(i) << " ";
    }    
    return 0;
}