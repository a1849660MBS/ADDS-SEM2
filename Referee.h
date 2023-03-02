#ifndef REFEREE_H
#define REFEREE_H

#include <iostream>
#include <string>
#include "Player.cpp"
#include "Human.cpp"
#include "Computer.cpp"

class Referee {
public:
    Referee();
    Player * refGame(Player * player1, Player * player2);

};
#endif