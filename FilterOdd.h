#pragma once
#include"FilterGeneric.h"


class FilterOdd : public FilterGeneric{
    public:
        FilterOdd();
        bool g(int x);
};
