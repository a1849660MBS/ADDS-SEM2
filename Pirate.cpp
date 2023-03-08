#include <iostream>
#include <string>
#include <vector>
#include "Pirate.h"


Pirate::Pirate(){
    moveName = "Pirate";
}

void Pirate::setBeats(){
    beatingMoves.push_back("Robot");
    beatingMoves.push_back("Monkey");
}