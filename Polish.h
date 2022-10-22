#ifndef POLISH_H
#define POLISH_H

#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Polish{
private:
    
public:
    Polish();
    // stack<string> left(string expression);
    // stack<long> right(string expression);
    string convert(string expression);
    ~Polish();
};
#endif