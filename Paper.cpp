#include <iostream>
#include <string>
#include <vector>

#include "Paper.h"

Paper::Paper(){
    moveName = "Paper";
}

void Paper::setBeats(){
    beatingMoves.push_back("Rock");
}