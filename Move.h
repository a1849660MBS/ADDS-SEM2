#ifndef MOVE_H
#define MOVE_H


#include <iostream>
#include <string>
#include <vector>

class Move{
    public:
    std::vector<std::string>beatingMoves;
   
   //std::vector<std::string>losingMoves;
    std::string moveName;

    //virtual void setName(std::string move);
    std::string getName();

    //Move();
    //Move(std::string n1);
    virtual void setBeats() = 0;
    //void setLoses(std::string move1, std::string move2);



};


//find function

#endif