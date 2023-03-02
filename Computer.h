#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include <string>
#include "Player.cpp"

using namespace std;

class Computer : public Player{
    public:
    string name =" Computer";
    char hand;
    virtual char makeMove();
    virtual string getName();
};

#endif