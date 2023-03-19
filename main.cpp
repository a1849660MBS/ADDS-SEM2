#include <iostream>
#include <string>
#include "Reverser.h"
#include "Truckloads.h"

using namespace std;
int main(){

    Reverser a;
    Truckloads t;

    int numC = 20;
    int load =3;

    cout<< "The number of crates are: " << numC << "The number of trucks required are: " << t.numTrucks(numC,load) << endl;
    int num = 54321;
    string test = "abcdefghijklmnopqrstuvwxyz";
   cout<< num<< " is reversed to:"<< a.reverseDigit(num) << endl;
   cout << test << " is reversed to: " << a.reverseString(test) << endl;


    return 0;
}