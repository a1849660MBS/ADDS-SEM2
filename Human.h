#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include <string>
#include "Player.cpp"

class Human: public Player{
    public:
     virtual char makeMove();
};


#endif