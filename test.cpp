#include <iostream>
#include <string>
#include <numeric>
#include <vector>
#include <list>


#include "BigNumCalc.h"


int main(void){

      BigNumCalc calculator;

    // Test buildBigNum
    std::string numString = "12345678901234567890";
    std::list<int> numList = calculator.buildBigNum(numString);
    std::cout << "numList: ";
    for (int num : numList) {
        std::cout << num;
    }
    std::cout << std::endl;

    // Test add
    std::list<int> num1 = {1, 2, 3};
    std::list<int> num2 = {4, 5, 6};
    std::list<int> sum = calculator.add(num1, num2);
    std::cout << "sum: ";
    for (int num : sum) {
        std::cout << num;
    }
    std::cout << std::endl;

    // Test sub
    num1 = {6, 5, 4};
    num2 = {3, 2, 1};
    std::list<int> diff = calculator.sub(num1, num2);
    std::cout << "diff: ";
    for (int num : diff) {
        std::cout << num;
    }
    std::cout << std::endl;

   // Test mul
    num1 = {9,8,7,6,5,4,3};
    num2 = {9};
    std::list<int> product = calculator.mul(num1, num2);
    std::cout << "product: ";
    for (int num : product) {
        std::cout << num;
    }
    std::cout << std::endl;

    return 0;
}