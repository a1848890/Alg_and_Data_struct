#pragma once

#include"FilterGeneric.h"

class FilterNonPositive : public FilterGeneric{
    public:
        FilterNonPositive();
        bool g(int x);
};
