#include"FilterGeneric.h"
#include"FilterNonPositive.h"





FilterNonPositive :: FilterNonPositive(){}

bool FilterNonPositive :: g(int x){
    return (x<=0) ? 1:0;
}