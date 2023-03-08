
#include <iostream>
#include <string>
#include "Referee.h"
#include "Move.h"
using namespace std;

Referee::Referee(){

}
Player * Referee::refGame(Player *player1, Player *player2){

    Move* move1 =  player1->makeMove();
    Move* move2 =  player2->makeMove();

    //draw scenario
    if(move1 == move2){
        //cout<< "Its a draw!" << endl;
        return nullptr;
    }


    // finds the winning moves
    

    return nullptr;
}