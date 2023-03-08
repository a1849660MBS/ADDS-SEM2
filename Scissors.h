#ifndef SCISSORS_H
#define SCISSORS_H

#include <iostream>
#include <vector>
#include <string>
#include "Move.h"


class Scissors: public Move
{

public:
    Scissors();

    void setBeats();
};

#endif