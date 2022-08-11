#include <array>
#include<stddef.h>
#include<iostream>


#include"Tournament.h"
#include"Player.h"
#include"Computer.h"
#include"Human.h"

#include"RandomComputer.h"
#include"Avalanche.h"
#include"Bureaucrat.h"
#include"Toolbox.h"
#include"Crescendo.h"
#include"PaperDoll.h"
#include"FistfullODollars.h"
#include"Referee.h"




Tournament :: Tournament(){}

Player* Tournament :: single_round(Player* player1, Player* player2){
    
    
    
    Referee the_referee;
    int player1_win_counter = 0;
    int player2_win_counter = 0;

    // Use pure virtual function to solve it 
    // declare a function in the player class as pure virtual in the player class, and then implement the pure virtual
    // function in the derived class
    for (int i=0; i<5; i++){
        player1->set_and_get_currentBet();
        player2->set_and_get_currentBet();
        
        
        char single_turn_result = the_referee.refGame(player1, player2);
        if (single_turn_result == 'W') player1_win_counter++;
        else if (single_turn_result == 'L') player2_win_counter++;
        else if (single_turn_result == 'T') {}
        else {}
    }

    // decide the winner
    if (player1_win_counter > player2_win_counter) return player1;
    else if (player1_win_counter < player2_win_counter) return player2;
    else {
        return player1;   // check here, if player1 is the smallest index feed in this function
    }
}


Player* Tournament :: run(array<Player*, 8> competitors){
        Player* winner_1_2 = single_round(competitors[0], competitors[1]);
        Player* winner_3_4 = single_round(competitors[2], competitors[3]);
        Player* winner_5_6 = single_round(competitors[4], competitors[5]);
        Player* winner_7_8 = single_round(competitors[6], competitors[7]);

        Player* winner_1_2_3_4 = single_round(winner_1_2, winner_3_4);
        Player* winner_5_6_7_8 = single_round(winner_5_6, winner_7_8);

        Player* final_winner = single_round(winner_1_2_3_4, winner_5_6_7_8);

        return final_winner;
}
