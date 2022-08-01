#include"Computer.h"
#include"Human.h"
#include"Referee.h"

#include<iostream>

using namespace std;

int main(){
    Human player1;
    Computer player2;
    // start here next time ... ... ... // 
    char player1_currentBet = player1.take_and_set_input();

    Referee the_referee;
    char single_turn_result = the_referee.refGame(player1, player2);

    cout << "Test : Single_turn_result = " << single_turn_result << endl;
    return 0;
}