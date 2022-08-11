#include"Computer.h"
#include"Human.h"
#include"Referee.h"
#include"Player.h"



Referee :: Referee(){}


char Referee :: refGame(Player* player1, Player* player2){
    char player1_current = player1->get_currentBet();
    char player2_current = player2->get_currentBet();

    char result;

    if (player1->get_currentBet() == 'P' && player2->get_currentBet() == 'S') result = 'L';
    else if (player1->get_currentBet() == 'P' && player2->get_currentBet() == 'R') result = 'W';
    else if (player1->get_currentBet() == 'P' && player2->get_currentBet() == 'P') result = 'T';

    else if (player1->get_currentBet() == 'R' && player2->get_currentBet() == 'P') result = 'L';
    else if (player1->get_currentBet() == 'R' && player2->get_currentBet() == 'S') result = 'W';
    else if (player1->get_currentBet() == 'R' && player2->get_currentBet() == 'R') result = 'T';

    else if (player1->get_currentBet() == 'S' && player2->get_currentBet() == 'P') result = 'W';
    else if (player1->get_currentBet() == 'S' && player2->get_currentBet() == 'R') result = 'L';
    else if (player1->get_currentBet() == 'S' && player2->get_currentBet() == 'S') result = 'T';
    

    else result = 'X';

    return result;
}