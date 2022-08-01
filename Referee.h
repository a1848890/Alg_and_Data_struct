#pragma once

#include"Computer.h"
#include"Human.h"



class Referee{
private:

public:
    Referee(); // constructor 
    char refGame(Human player1, Computer player2); 
    // returns the outcome for player1:  'W', 'L' or 'T' (Win, Lose, Tie)
};

