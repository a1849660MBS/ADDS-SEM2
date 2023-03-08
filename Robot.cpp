#include <iostream>
#include <string>
#include <vector>
#include "Robot.h"


Robot::Robot(){

    moveName = "Robot";
}

void Robot::setBeats(){
    beatingMoves.push_back("Zombie");
    beatingMoves.push_back("Ninja");
}