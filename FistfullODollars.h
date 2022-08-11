#pragma once
#include"Computer.h"
#include"Player.h"

class FistfullODollars : public Computer{
    private:
        int _FistfullODollars_count;
    public:
        FistfullODollars();
        char set_and_get_currentBet();
};


