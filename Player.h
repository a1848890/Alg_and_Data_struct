#pragma once
class Player{
    protected:
        char _currentBet;
    public:
        Player();
        char get_currentBet();
        virtual char set_and_get_currentBet() = 0;
};