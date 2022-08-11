#include"Computer.h"
#include"Toolbox.h"
#include"Player.h"


Toolbox :: Toolbox() : Computer(){}

char Toolbox :: set_and_get_currentBet(){
    char temp = 'S';
    _currentBet = temp;
    return _currentBet;
}
