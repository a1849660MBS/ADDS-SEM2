#ifndef ROCK_CPP
#define ROCK_CPP

#include "Move.h"
#include <string>
#include <iostream>

class Rock : public Move
{
public:
    Rock();
    
    void setBeats();
};

#endif