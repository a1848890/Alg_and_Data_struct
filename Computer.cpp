#include"Computer.h"

Computer :: Computer() : _currentBet(' '), _computer_win_count(0){}


char Computer :: set_and_get_currentBet(){
    _currentBet = 'R';
    return _currentBet;
}


int Computer :: get_computer_win_count(){
    return _computer_win_count;
}

void Computer :: increament_computer_win(){
    _computer_win_count++;
}