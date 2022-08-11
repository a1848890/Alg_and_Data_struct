#pragma once
#include"Player.h"

class Human : public Player{
    private : 
        int _human_win_count;
    public: 
        Human();
        char set_and_get_currentBet();  // MakeMove();
        char get_human_currentBet(); //
        int get_human_win_count();
        void increament_human_win_count();
};

