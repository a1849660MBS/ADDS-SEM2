#include <iostream>
#include <string>
#include "Human.cpp"
#include "Player.cpp"
#include "Computer.cpp"
#include "Referee.cpp"

using namespace std;

int main(){
    Human a1;
    Human a2;

    Referee ref;

    ref.refGame(a1,a2);

    return 0;
}