#pragma once
#include"FilterGeneric.h"

class FilterForTwoDigitPositive : public FilterGeneric{
    public:
        FilterForTwoDigitPositive();
        bool g(int x);
};
