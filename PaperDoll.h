#pragma once
#include"Computer.h"
#include"Player.h"


class PaperDoll : public Computer{
    private:
        int _PaperDoll_count;
    public:
        PaperDoll();
        char set_and_get_currentBet();
};


