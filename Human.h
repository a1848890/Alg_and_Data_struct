#pragma once

class Human{
    private : 
        char _currentBet; //
        int _human_win_count;
    public: 
        Human();
        char take_and_set_input();  // MakeMove();
        char get_human_currentBet(); //
        int get_human_win_count();
        void increament_human_win_count();
};

