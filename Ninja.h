#ifndef NINJA_H
#define NINJA_H

#include <iostream>
#include <string>
#include <vector>
#include "Move.h"

class Ninja : public Move{
    public:
    Ninja();

    void setBeats();  
};
#endif