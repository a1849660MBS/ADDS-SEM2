#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>

using namespace std;

class Player{
    public:
    string name = " ";
    string hand;
    virtual char makeMove()=0; 
    string getName();
};


#endif