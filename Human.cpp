#include"Human.h"
#include<iostream>

using std::cin;
using std::cout;
using std::endl;




Human :: Human() : _currentBet(' '), _human_win_count(0){}

char Human :: get_human_currentBet(){
    return _currentBet;
}


char Human :: take_and_set_input(){
    cout << "Enter move: ";
    char temp_input;
    cin >> temp_input;

    _currentBet = temp_input;
    return _currentBet;
}

int Human :: get_human_win_count(){
    return _human_win_count;
}

void Human :: increament_human_win_count(){
    _human_win_count++;
}

