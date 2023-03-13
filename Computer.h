#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include <string>
#include "Player.h"
#include "Rock.h"
//using namespace std;

class Computer : public Player{
    public:
    std::string Objname ="Computer";
    
    Computer();
    Move* makeMove();
    std::string getName();
};

#endif