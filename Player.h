#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
#include "Move.h"

//using namespace std;

class Player{
    public:
    std::string name = " ";
    virtual Move* makeMove()=0; 
    virtual string getName()=0;
};


#endif