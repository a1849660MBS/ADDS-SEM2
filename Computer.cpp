#include <iostream>
#include <string>
#include "Computer.h"

using namespace std;

Move* Computer::makeMove(){
    Move* move;
    move = new Rock();

    return move;
}

Computer::Computer(){
 Objname = "Computer";
}
string Computer::getName(){

    return Objname;
}