#ifndef MONKEY_H
#define MONKEY_H

#include <iostream>
#include <string>
#include <vector>
#include "Move.h"

class Monkey : public Move{
    public:
    Monkey();

    void setBeats();
};

#endif
