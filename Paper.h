#ifndef PAPER_H
#define PAPER_H

#include <iostream>
#include <string>
#include <vector>


#include "Move.h"


class Paper : public Move{
    public:
    Paper();
    void setBeats();
};


#endif
