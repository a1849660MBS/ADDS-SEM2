#include <iostream>
#include <string>
#include "Human.h"

using namespace std;


Human::Human()
{
    name = "Human";
}

char Human::makeMove()
{
    cout << "Enter Move: ";
    cout << endl;
    cin >> move;

    return move;

}

string Human::getName()
{
    return name;
}
