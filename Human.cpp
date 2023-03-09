#include <iostream>
#include <string>
#include "Human.h"
#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Zombie.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
using namespace std;

Human::Human()
{
    name = "Human";
}

Human::Human(std::string inputName){
    inputName = name;
}

Move *Human::makeMove()
{
    cout << "Enter Move: ";
    cout << endl;
    cin >> move;

    if (move == "Rock")
    {
        return new Rock();
    }
    else if (move == "Paper")
    {
        return new Paper();
    }
    else if (move == "Scissors")
    {
        return new Scissors();
    }
    else if (move == "Monkey")
    {
        return new Monkey();
    }
    else if (move == "Zombie")
    {
        return new Zombie();
    }
    else if (move == "Robot")
    {
        return new Robot();
    }
    else if (move == "Pirate")
    {
        return new Pirate();
    }
    else if (move == "Ninja")
    {
        return new Ninja();
    }

    return nullptr;
}

string Human::getName()
{
    return name;
}
