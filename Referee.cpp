#include"Computer.h"
#include"Human.h"
#include"Referee.h"
#include<iostream>
using std::cout;




Referee :: Referee(){}


char Referee :: refGame(char player1_current, char player2_current){
    
    char result;

    if (player1_current  ==  'P'){
        result = 'W';
    }
    else if (player1_current == 'S') {
        result = 'L';
    }
    else result = 'T';

    // cout << "Result = " << result << "\n";

    return result;
}
