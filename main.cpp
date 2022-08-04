#include"Computer.h"
#include"Human.h"
#include"Referee.h"

#include<iostream>

using namespace std;

int main(){
    Human player1;
 Computer player2;
    // start here next time ... ... ... // 


    Referee the_referee;
    char  player1_current_input = player1.take_and_set_input();
    char  player2_current_input = player2.set_and_get_currentBet();


    char single_turn_result = the_referee.refGame(player1_current_input, player2_current_input);

    cout << "Test : Single_turn_result = " << single_turn_result << endl;
    return 0;
}