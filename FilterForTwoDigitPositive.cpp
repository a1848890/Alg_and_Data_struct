#include"FilterForTwoDigitPositive.h"
#include"FilterGeneric.h"



FilterForTwoDigitPositive :: FilterForTwoDigitPositive(){}


bool FilterForTwoDigitPositive::g(int x){
    return  (x>9 && x<100) ? 1:0;
}