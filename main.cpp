#include <iostream>
#include <stack>
#include "Polish.h"

using namespace std;

int main(){
    string expression;
    Polish p;

    getline(cin, expression);

    int length = expression.size();
    for (int i = length; i >= 0; i--){
        string str = "";
        while (i >= 0 && expression[i] != ' '){
            str = expression[i] + str;
            i--;
        }

        long temp = atol(str.c_str());

        if (temp < 0 || temp > 99){
            cout << "Error";
            return 0;
        }
    }
    cout << p.convert(expression) << endl;

    return 0;
}
