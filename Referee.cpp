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

    string player1_move = move1->getName();
    string player2_move = move2 ->getName();

    // winning for player 1
    if(std::find(move2->beatingMoves.begin(),move2->beatingMoves.end(),player1_move) != move2->beatingMoves.end() ){
        //cout << "player 2 wins" << endl;
        return player2;
    }else if(std::count(move1->beatingMoves.begin(),move1->beatingMoves.end(),player2_move)){
        //cout << "Player 1 wins" << endl;
        return player1;
    }
    else if (move1->getName() == move2->getName())
    {
        cout << "Its a draw!" << endl;
        return nullptr;
    }
    /* if(std::find(move2->beatingMoves.begin(),move2->beatingMoves.end(), move1->getName()) == move2->beatingMoves.end()){
         cout<<"Player 1 wins"<< endl;
         return player1;
     } else if (std::find(move2->beatingMoves.begin(),move2->beatingMoves.end(), move1->getName()) != move2->beatingMoves.end()){
         cout<<"Player 2 wins"<< endl;
         return player2;
     }
 */
    return nullptr;
}