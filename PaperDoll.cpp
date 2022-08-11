#include"Computer.h"
#include"PaperDoll.h"
#include"Player.h"


PaperDoll :: PaperDoll() : Computer() , _PaperDoll_count(0){
}

char PaperDoll :: set_and_get_currentBet(){
    char option_array[3] = {'P', 'S', 'S'};
    int selection_index = _PaperDoll_count % 3;
    char temp = option_array[selection_index];
    _currentBet = temp;

    _PaperDoll_count++;

    return _currentBet;
}
