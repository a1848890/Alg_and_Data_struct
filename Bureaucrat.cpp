#include"Bureaucrat.h"
#include"Computer.h"
#include"Player.h"

Bureaucrat :: Bureaucrat() : Computer(){}


char Bureaucrat :: set_and_get_currentBet(){
    char temp = 'P';
    _currentBet = temp;
    return _currentBet;
}