#include"MapAbsoluteValue.h"
#include"MapGeneric.h"

MapAbsoluteValue :: MapAbsoluteValue(){}

int MapAbsoluteValue :: f(int x){
    return (x>0) ? x:-x;
}