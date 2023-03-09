#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include <string>
#include "Player.h"

class Human: public Player{
public:
    Human();
    Human(std::string inputName);
    Move* makeMove();
    std::string getName();

    std::string name;
    std::string move;

};


#endif