#pragma once

#include"Computer.h"
#include"Human.h"



class Referee{
private:

public:
    Referee(); // constructor 
    char refGame(char player1_current, char player2_current); 
    // Reduce coupling by taking two inputs instead of taking two players
    // returns the outcome for player1:  'W', 'L' or 'T' (Win, Lose, Tie)
};

