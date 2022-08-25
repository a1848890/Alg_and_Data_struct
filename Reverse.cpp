#include<string>
#include"Reverse.h"
#include<cmath>

using std::string;



Reverse :: Reverse(){}



int Reverse :: reverseDigit(int n) {
    if(n<=10 && n >= -10) return n;

    int length=0;
    for (int i=n; i; i/=10) length++;

    return n%10*(int)pow(10, length-1) + reverseDigit(n/10);

}



/*
int Reverse :: reverseDigit(int num){
    int sum = 0;
    int temp;
    int reminder = 0;
    if(num){
        sum = 0;
        reminder = num % 10;
        sum = sum * 10 + reminder;
        reverseDigit(num/10);
    }
  else
    { 
        temp = sum;
        return sum;
    }
  return temp;

}

*/





string Reverse :: reverseString(string string_to_reverse){
    if (string_to_reverse.length() == 1) {
        return string_to_reverse;
    }
    else{
        return reverseString(string_to_reverse.substr(1,string_to_reverse.length())) + string_to_reverse.at(0);
    }
}
