#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include "Referee.h"
#include "Move.h"
using namespace std;

Referee::Referee()
{
}

Player *Referee::refGame(Player *player1, Player *player2)
{

    Move *move1 = player1->makeMove();
    Move *move2 = player2->makeMove();

    if (move1 == move2)
    {
        return nullptr;
    }

    if (move1->getName() == "Paper" && move2->getName() == "Rock" || move1->getName() == "Scissors" && move2->getName() == "Paper" || move1->getName() == "Rock" && move2->getName() == "Scissors")
    {
        return player1;
    }
    else
    {
        return player2;
    }
    // monkey ninja pirate robot zombie

    // monkey beats ninja and robot
    if (move1->getName() == "Monkey" && move2->getName() == "Ninja" || move1->getName() == "Monkey" && move2->getName() == "Robot")
    {
        return player1;
    }
    else if (move2->getName() == "Monkey" && move1->getName() == "Ninja" || move2->getName() == "Monkey" && move1->getName() == "Robot")
    {
        return player2;
    }
    // ninja beats zombie and Pirtae
    else if (move1->getName() == "Ninja" && move2->getName() == "Zombie" || move1->getName() == "Ninja" && move2->getName() == "Pirate")
    {
        return player1;
    }
    else if (move2->getName() == "Ninja" && move1->getName() == "Zombie" || move2->getName() == "Ninja" && move1->getName() == "Pirate")
    {
        return player2;
    }
    //pirate beats Robot and monkey
    else if (move1->getName() == "Pirate" && move2->getName() == "Monkey" || move1->getName() == "Pirate" && move2->getName() == "Robot")
    {
        return player1;
    }
    else if (move2->getName() == "Pirate" && move1->getName() == "Monkey" || move2->getName() == "Pirate" && move1->getName() == "Robot")
    {
        return player2;
    }

    //robot beats Zombie and ninja
    else if (move1->getName() == "Robot" && move2->getName() == "Zombie" || move1->getName() == "Robot" && move2->getName() == "Ninja")
    {
        return player1;
    }
    else if (move2->getName() == "Robot" && move1->getName() == "Zombie" || move2->getName() == "Robot" && move1->getName() == "Ninja")
    {
        return player2;
    }


    //Zombie beats monkey and pirate
    else if (move1->getName() == "Zombie" && move2->getName() == "Monkey" || move1->getName() == "Zombie" && move2->getName() == "Pirate")
    {
        return player1;
    }
    else if (move2->getName() == "Zombie" && move1->getName() == "Monkey" || move2->getName() == "Zombie" && move1->getName() == "Pirate")
    {
        return player2;
    }

    return nullptr;
}
