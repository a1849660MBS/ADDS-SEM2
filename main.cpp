#include <iostream>
#include <string>
#include "Computer.h"
#include "Referee.h"

using namespace std;

int main(){
    Human a;
    Computer b;
    Referee ref;


    ref.refGame(a,b);

    return 0;
}