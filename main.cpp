#include <iostream>
#include <string>
#include "Computer.h"
#include "Referee.h"

using namespace std;

int main(){
    Human a;
    Computer b;
    Referee ref;

    Human * pointer1 = &a;
    Computer * pointer2 = &b;

    ref.refGame(pointer1,pointer2);

    return 0;
}