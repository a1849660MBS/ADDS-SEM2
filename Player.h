#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
#include "Move.h"

//using namespace std;

class Player{
    public:
    std::string Objname;
    virtual Move* makeMove()=0; 
    virtual std::string getName()=0;
};


#endif