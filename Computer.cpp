#include <iostream>
#include <string>
#include "Computer.h"

using namespace std;

char Computer::makeMove(){
    move = 'R';

    return move;
}

Computer::Computer(){

}
string Computer:: getName(){

    return name;
}