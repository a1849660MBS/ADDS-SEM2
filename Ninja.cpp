#include <iostream>
#include <string>
#include <vector>
#include "Ninja.h"


Ninja::Ninja(){
    moveName = "Ninja";
}

void Ninja::setBeats(){
    beatingMoves.push_back("Zombie");
    beatingMoves.push_back("Pirate");
}