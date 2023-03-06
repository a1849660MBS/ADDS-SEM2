#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include <string>
#include "player.h"

using namespace std;

class Computer : public Player{
    public:
    std::string name =" Computer";
    char move;
    Computer();
    char makeMove();
    std::string getName();
};

#endif