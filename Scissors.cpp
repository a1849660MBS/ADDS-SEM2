#include <iostream>
#include <vector>
#include <string>

#include "Scissors.h"

Scissors::Scissors(){
    moveName = "Scissors";
}

void Scissors::setBeats(){
    beatingMoves.push_back("Paper");
}
