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
    string player2_move = move2->getName();

    if (move1->getName() == move2->getName())
    {
        return nullptr;
    }
    if (std::find(move2->beatingMoves.begin(), move2->beatingMoves.end(), move1->getName()) == move2->beatingMoves.end())
    {
        return player1;
    }
    if (std::find(move2->beatingMoves.begin(), move2->beatingMoves.end(), move1->getName()) != move2->beatingMoves.end())
    {
        return player2;
    }

    return nullptr;
}