#include <iostream>
#include <string>
#include "Computer.h"
#include "Referee.h"
#include "Player.h"
#include "Human.h"

using namespace std;

int main(){
    string playerName = "Jhon";
    Human a(playerName);
    Computer b;
    Referee ref;

    Human * pointer1 = &a;
    Computer * pointer2 = &b;
    cout<< pointer1->getName()<< " Plays against " << pointer2->getName() << endl;

    ref.refGame(pointer1,pointer2);

    return 0;
}