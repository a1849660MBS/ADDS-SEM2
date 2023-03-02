
#include <iostream>
#include <string>
#include "Referee.h"

using namespace std;

Referee::Referee(){
    
}
Player * Referee::refGame(Player * player1, Player * player2){

    cout<< player1->getName()<< " Plays against " << player2->getName() << endl;

    player1->makeMove();
    player2->makeMove();

    if(player1->hand == 'R' && player2->hand == 'S'){
        cout << player1->getName() << ": Wins! ";
        return player1;
    }

    if(player1->hand == 'P' && player2->hand == 'R'){
        cout << player1->getName() << ": Wins! ";
        return player1;
    }

    if(player1->hand == 'S' && player2->hand == 'P'){
        cout << player1->getName() << ": Wins! ";
        return player1;
    }

    if(player2->hand == 'R' && player1->hand == 'S'){
        cout << player2->getName() << ": Wins! ";
        return player2;
    }

    if(player2->hand == 'P' && player1->hand == 'R'){
        cout << player2->getName() << ": Wins! ";
        return player2;
    }

    if(player2->hand == 'S' && player1->hand == 'P'){
        cout << player2->getName() << ": Wins! ";
        return player2;
    }

    if(player1->hand == player2->hand){
        cout <<"It's a draw!" << endl;
        return nullptr;
    }

    return nullptr;
}