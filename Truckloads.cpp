#include <iostream>
#include <string>
#include "Truckloads.h"

using namespace std;
int Truckloads::divPile(int size,int load){
    int r=0;

    if(size <=load){
        return 1;
    }else{
        if(size%2==0){
            r+= divPile(size/2,load);
            r+= divPile(size/2,load);
        } else{
            r+= divPile(size/2,load);
            r+= divPile(size/2+1,load);
        }
    }

    return r;
}
int Truckloads::numTrucks(int numC,int load){
    int ret=0;
	
	ret += divPile(numC,load);

	return ret;
}

