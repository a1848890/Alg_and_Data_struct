#pragma once
#include <array>
#include<stddef.h>
#include<iostream>

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

using std::array;
using std::cout;

class Tournament{
    private:

    public:
        Tournament();
        Player* run(array<Player*, 8>  competitors);
        Player* single_round(Player* player1, Player* player2);
};


