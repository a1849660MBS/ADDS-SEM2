
#include <iostream>
#include <string>
#include<algorithm>
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


    //if it finds it in move 1 but not 2, player 1 wins, else player 2 wins

    if(find(move1->beatingMoves.begin(),move1->beatingMoves.end(), move1->getName()) != move2->beatingMoves.end()){
        return player1;
    } else{
        return player2;
    }

    return nullptr;
}