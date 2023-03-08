#ifndef PIRATE_H
#define PIRATE_H

#include <iostream>
#include <string>
#include <vector>
#include "Move.h"

class Pirate : public Move{
    public:
    Pirate();

    void setBeats();
};
#endif