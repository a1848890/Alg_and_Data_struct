#include<iostream>
#include<sstream>
#include<string>

using namespace std;

bool isNum(string str){
     int len = str.length();
     for (int i = 0; i < len; i++){
         if (isdigit(str.at(i)) == false)
             return false;
     }
     return true;
}

int define_operation(string the_operator, int x, int y){
    if (the_operator == "+") return x+y;
    else if (the_operator == "-") return x-y;
    else if (the_operator == "*") return x*y;
    else if (the_operator == "/") return x/y;
    else {
        cout << "DEFINE OPERATOR ERROR\n";
        return 0;
    }
}

 int main(){

    int arr[100];
    int count = 0;
    int count_operator = 0;
    int num;

    string str;
    string operator_array[100];
    int integer_array[100];

    while (true){
        if (std::cin.peek() == '\n') break;

        cin >> str;
        if (isNum(str) == false){ // if the input is not number
            if (str != "+" && str != "-" && str != "*" && str != "/") {
                cout << "ERROR"; // if the input is illigeal operator
                break;
            }
            else {
                operator_array[count_operator] = str;
                count_operator++;
            }
        }
       else { // if the input is number
            integer_array[count] = stoi(str);
            count++;
        }
    }
   
    if (count_operator != count - 1) {
        cout << "ERROR";
        return 0;
    }

    int operator_iter = count_operator-1;
    int temp_result = integer_array[0];
    for (int i=0; i<count-1; i++){
        // cout << "count_operator: " << count_operator << endl;
        //cout << integer_array[i]  << " ";
        //cout << integer_array[i+1]  << " ";
       // cout << operator_array[operator_iter] << " ";

        temp_result = define_operation(operator_array[operator_iter], temp_result, integer_array[i+1]);
        //operator_iter--;
        operator_iter--;
        //cout << "temp: " << temp_result << "\n\n"; 
    }
    cout << "(";
    cout << integer_array[0];
    for (int i=1; i<count; i++){
        if (i == 1)
        cout << " " << operator_array[count_operator-i] << " " << integer_array[i] << ") ";
        else 
        cout <<  operator_array[count_operator-i] << " " << integer_array[i];
    }
    
    
    
    cout  << " = ";
    cout << temp_result << endl;
    /* test input*/
 /*   for (int i=0; i<4; i++){
        cout << operator_array[i] << endl;
        cout << integer_array[i] << endl;
    }
*/
    return 0;
}
