#include"FilterOdd.h"
#include"FilterGeneric.h"


FilterOdd :: FilterOdd(){}

bool FilterOdd :: g(int x){ // return true if x is a even number
    return (x%2==0) ? 0:1;
}