#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include <string>
#include "Player.h"

class Human: public Player{
public:
    Human();
    char makeMove();
    std::string getName();

    std::string name;
    char move;

};


#endif