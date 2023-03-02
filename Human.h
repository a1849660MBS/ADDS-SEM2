#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include <string>
#include "Player.cpp"

class Human: public Player{
    public:
    string name = "Human";
    char hand;
    Human(string inName);
    virtual char makeMove();
    virtual string getName();

};


#endif