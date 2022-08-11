#include<cstdlib>
#include<ctime>
#include"Computer.h"
#include"RandomComputer.h"
#include"Player.h"

RandomComputer :: RandomComputer():Computer(){}

char RandomComputer :: set_and_get_currentBet(){
    char option_array[3] = {'R', 'P', 'S'};
    srand((unsigned)time(0));
    int randomNumber = (rand()%3);
    char generated_option = option_array[randomNumber];
    _currentBet = generated_option;
    return _currentBet;
}


