#include"Computer.h"
#include"Crescendo.h"
#include"Player.h"


Crescendo :: Crescendo() : Computer(), _Crescendo_count(0){}

char Crescendo :: set_and_get_currentBet(){
    char option_array[3] = {'P', 'S', 'R'};
    int selection_index = _Crescendo_count % 3;
    char temp = option_array[selection_index];
    _currentBet = temp;
    _Crescendo_count++;
    if (_Crescendo_count == 4) _Crescendo_count = 0;
    return _currentBet;
}
