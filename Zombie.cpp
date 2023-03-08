#include <iostream>
#include <string>
#include <vector>
#include "Zombie.h"

Zombie::Zombie(){
    moveName = "Zombie";
}

void Zombie::setBeats(){
    beatingMoves.push_back("Monkey");
    beatingMoves.push_back("Pirate");
}