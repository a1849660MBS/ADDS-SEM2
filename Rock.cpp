#include <iostream>
#include <string>
#include <vector>
#include "Rock.h"

Rock::Rock()
{
    moveName = "Rock";
}

void Rock::setBeats()
{
    {
        beatingMoves.push_back("Scissors");
    }
}
