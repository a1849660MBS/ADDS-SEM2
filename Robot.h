#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include <string>
#include <vector>
#include "Move.h"


class Robot : public Move{
    public:
    Robot();

    void setBeats();
};

#endif