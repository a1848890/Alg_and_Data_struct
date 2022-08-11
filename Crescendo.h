#pragma once
#include"Computer.h"
#include"Player.h"

class Crescendo : public Computer{
    private:
        int _Crescendo_count;
    public:
        Crescendo();
        char set_and_get_currentBet();
        
};


