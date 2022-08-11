#pragma once

#include<cstdlib>
#include<ctime>
#include"Computer.h"
#include"Player.h"

class RandomComputer : public Computer{
    public:
        RandomComputer();
        char set_and_get_currentBet();
};





