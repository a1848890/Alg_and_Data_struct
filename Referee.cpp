#include"Computer.h"
#include"Human.h"
#include"Referee.h"





Referee :: Referee(){}


char Referee :: refGame(Human player1, Computer player2){
    char player1_current = player1.get_human_currentBet();
    char player2_current = player2.set_and_get_currentBet();
    
    char result;

    if (player1_current  ==  'P'){
        result = 'W';
    }
    else if (player1_current == 'S') {
        result = 'L';
    }
    else result = 'T';

    return result;
}
