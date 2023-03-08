#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

class Computer : public Player{
    public:
    std::string name =" Computer";
    char move;
    Computer();
    Move* makeMove();
    std::string getName();
};

#endif