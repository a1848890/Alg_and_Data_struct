#include"ReduceGeneric.h"
#include"ReduceGCD.h"



ReduceGCD :: ReduceGCD(){}





int ReduceGCD :: binaryOperator(int x, int y){
    int _gcd = 0;
    if ( y > x) {   
    int temp = y;
    y = x;
    x = temp;
  }
    
  for (int i = 1; i <=  y; ++i) {
    if (x % i == 0 && y % i ==0) {
      _gcd = i;
    }
  }
      return _gcd;
}

