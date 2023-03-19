#include <iostream>
#include <string>
#include "Reverser.h"

int Reverser::reverseDigit(int value){
 static int reversedNum = 0;
 static int basePosition = 1;
if (value < 0){
    return -1;
} else if(value > 0){
    reverseDigit(value/10);
    reversedNum += (value%10) *basePosition;
    basePosition *= 10;

    return reversedNum;
}
return -1;
}
std::string Reverser::reverseString(std::string characters){
    std::string str;
    if(characters != "\0"){
        str = reverseString(characters.substr(1,characters.length()));
        str += characters.substr(0,1);
    } 

    return str;
        

}


