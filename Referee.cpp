
#include <iostream>
#include <string>
#include "Referee.h"

using namespace std;

Referee::Referee(){

}
Player * Referee::refGame(Player *player1, Player *player2){

    cout<< player1->getName()<< " Plays against " << player2->getName() << endl;

    char move1 =  player1->makeMove();
    char move2 =  player2->makeMove();

    if(move1 == move2){
        //cout<< "Its a draw!" << endl;
        return nullptr;
    } else if (move1 == 'P'){
        //cout<< player1->getName() << "Wins" << endl;
        return player1;
    } else if (move1 == 'S'){
        //cout<< player2->getName() << "Wins" << endl;
        return player2;
    }

    return nullptr;
}