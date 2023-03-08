#include <iostream>
#include <string>
#include <vector>
#include "Monkey.h"

Monkey::Monkey(){
    moveName = "Monkey";
}

void Monkey::setBeats(){
    beatingMoves.push_back("Robot");
    beatingMoves.push_back("Ninja");
}