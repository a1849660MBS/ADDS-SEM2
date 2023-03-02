#include <iostream>
#include <string>
#include "Human.cpp"
#include "Player.cpp"
#include "Computer.cpp"
#include "Referee.cpp"

using namespace std;

int main(){
    Human *a1("Marwan");
    Human *a2("Tom");

    Referee ref();

    ref.reGame(a1,a2);

    return 0;
}