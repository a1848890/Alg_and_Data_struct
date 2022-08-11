#include"Computer.h"
#include"FistfullODollars.h"
#include"Player.h"


FistfullODollars :: FistfullODollars() : Computer(), _FistfullODollars_count(0){
}

char FistfullODollars :: set_and_get_currentBet(){
    char option_array[3] = {'R', 'P', 'P'};
    int selection_index = _FistfullODollars_count % 3;
    char temp = option_array[selection_index];
    _currentBet = temp;

    _FistfullODollars_count++;

    return _currentBet;
}
