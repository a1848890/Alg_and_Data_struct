#include "Polish.h"

using namespace std;

Polish::Polish(){}

string Polish::convert(string expression){
    stack<string> strStack;
    stack<long> calStack;
    int count = 0;
    int counter = 0;
    int length = expression.size();
    string c;

    for (int i = length; i >= 0; i--){
        c = expression[i];
        if (c == " "){
            count++;
            continue;
        }
        
        strStack.push(c);
        calStack.push(atol(c.c_str()));
        if (c == "+" || c == "-" || c == "*" || c == "/"){
            while(strStack.size() < 2){
                return "Error";
            }
            counter++;
            if (!strStack.empty()){
                strStack.pop();
            }else{
                return "Error";
            }
            string op1 = "";
            if (!strStack.empty()){
                op1 = strStack.top();
                strStack.pop();
            }else{
                return "Error";
            }
            string op2 = "";
            if (!strStack.empty()){
                op2 = strStack.top();
                strStack.pop();
            }else{
                return "Error";
            }
            
            string temp = "";
            if (count != counter*2){
                temp = "(" + op1 + " " + c + " " + op2 + ")";
            }else{
                temp = op1 + " " + c + " " + op2;
            }

            if (!calStack.empty()){
                calStack.pop();
            }else{
                return "Error";
            }
            long calop1 = 0;
            if (!calStack.empty()){
                calop1 = calStack.top();
                calStack.pop();
            }else{
                return "Error";
            }
            long calop2 = 0;
            if (!calStack.empty()){
                calop2 = calStack.top();
                calStack.pop();
            }else{
                return "Error";
            }

            if (c == "+"){
                calStack.push(calop1 + calop2);
            }else if (c == "-"){
                calStack.push(calop1 - calop2);
            }else if (c == "*"){
                calStack.push(calop1 * calop2);
            }else if (c == "/"){
                calStack.push(calop1 / calop2);
            }
            
            strStack.push(temp);
        }
    }
    if (count - counter == counter){
        return strStack.top() + " " + "=" + " " + to_string(calStack.top());
    }else{
        return "Error";
    }
}
Polish::~Polish(){}
