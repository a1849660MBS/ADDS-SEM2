#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include <string>
#include "Player.h"

class Human: public Player{
    public:
    string name = " ";
    char hand;
    Human();
    Human(string inName);
    virtual char makeMove();
    virtual string getName();

};


#endif