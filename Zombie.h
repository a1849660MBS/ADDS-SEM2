#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>
#include <vector>
#include "Move.h"

class Zombie: public Move{
    public:
    Zombie();

    void setBeats();

};

#endif