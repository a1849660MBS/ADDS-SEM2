#include <iostream>
#include <string>
#include "Human.h"

using namespace std;

Human::Human(string inName){
    name = inName;
}

char Human::makeMove(){
    cout<< "Enter Move: ";
    cout << endl;
    cin>> hand;

    return hand;
}

string Human::getName(){
    return name;
}


