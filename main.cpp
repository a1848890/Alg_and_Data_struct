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



int main(){
    Player *player1 = new Avalanche;
    Player *player2 = new Bureaucrat;
    Player *player3 = new Bureaucrat;
    Player *player4 = new Toolbox;
    Player *player5 = new Toolbox;
    Player *player6 = new Crescendo;
    Player *player7 = new Crescendo;
    Player *player8 = new FistfullODollars;

    array<Player*, 8> competitor_group1 = {player1, player2, player3, player4, player5, player6, player7, player8};

    Tournament Tournament1;
    Player* t1_winner = Tournament1.run(competitor_group1);
    

    return 0;
}