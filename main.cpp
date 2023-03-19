#include <iostream>
#include <string>
#include "Reverser.h"

using namespace std;
int main(){

    Reverser a;

    int num = 54321;
    string test = "abcdefghijklmnopqrstuvwxyz";
   cout<< num<< " is reversed to:"<< a.reverseDigit(num) << endl;
   cout << test << " is reversed to: " << a.reverseString(test) << endl;
    return 0;
}