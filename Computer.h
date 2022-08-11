#pragma once
#include"Player.h"


class Computer : public Player{
    protected: 
        int _computer_win_count;
    public:
        Computer(); 
        char set_and_get_currentBet(); //
        int get_computer_win_count(); 
        void increament_computer_win();
};

