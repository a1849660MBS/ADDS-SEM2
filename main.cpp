#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main(){

    BubbleSort a;
    QuickSort b;
    RecursiveBinarySearch z;

    std::string input;
    std::getline(std::cin, input);
    std::istringstream iss(input);
    std::vector<int> v;
    
    
    int num;
    while (iss >> num) {
        v.push_back(num);
    }

   
    std::vector<int> sorted_v = b.sort(v);
    if( z.search(v,1)){
    std::cout << "true ";
    for (int i = 0; i < sorted_v.size(); i++) {
        std::cout << sorted_v[i] << " ";
    }
    std::cout << std::endl;
    } 
    
    if(!(z.search(v,1))){
    std::cout << "false ";
    for (int i = 0; i < sorted_v.size(); i++) {
        std::cout << sorted_v[i] << " ";
    }
    std::cout << std::endl; 
    }
   

    return 0;
}