#pragma once

#include"Computer.h"
#include"Human.h"
#include"Player.h"


class Referee{
private:

public:
    Referee(); // constructor 
    char refGame(Player* player1, Player* player2); 
    // returns the outcome for player1:  'W', 'L' or 'T' (Win, Lose, Tie)
};
