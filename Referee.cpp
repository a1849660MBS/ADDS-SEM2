#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include "Referee.h"
#include "Move.h"
using namespace std;

Referee::Referee()
{
}
Player *Referee::refGame(Player *player1, Player *player2)
{

    Move *move1 = player1->makeMove();
    Move *move2 = player2->makeMove();

   if(move1 == move2){
     return nullptr;
   }else if(move1->getName() == "Paper"){
    return player1;
   } else if(move1->getName() == "Scissors"){
    return player2;
   }

    return nullptr;
}