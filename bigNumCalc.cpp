#include "BigNumCalc.h"

#include <string>
#include <numeric>
#include <vector>
#include <list>

    BigNumCalc::BigNumCalc(){

    }
    BigNumCalc::~BigNumCalc(){
        
    }

std::list<int> BigNumCalc::buildBigNum(std::string numString)
{

    std::list<int> result;
        for (char c : numString) {
            result.push_back(c - '0');
        }

        return result;
}

std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2)
{
     std::list<int> result;
        int carry = 0;
        while (!num1.empty() || !num2.empty() || carry) {
            int sum = carry;
            if (!num1.empty()) {
                sum += num1.back();
                num1.pop_back();
            }
            if (!num2.empty()) {
                sum += num2.back();
                num2.pop_back();
            }
            carry = sum / 10;
            result.push_front(sum % 10);
        }
    
        return result;
}

std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2)
{
     std::list<int> result;
        int borrow = 0;
        while (!num1.empty() || !num2.empty()) {
            int diff = borrow;
            if (!num1.empty()) {
                diff += num1.back();
                num1.pop_back();
            }
            if (!num2.empty()) {
                diff -= num2.back();
                num2.pop_back();
            }
            if (diff < 0) {
                diff += 10;
                borrow = -1;
            }
            else {
                borrow = 0;
            }
            result.push_front(diff);
        }
        while (result.size() > 1 && result.front() == 0) {
            result.pop_front();
        }

        return result;
}

std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2)
{
     std::list<int> result(num1.size() + num2.size(), 0);
    auto it1 = num1.rbegin();
    auto it2 = num2.rbegin();
    auto it_res = result.rbegin();
    for (; it2 != num2.rend(); ++it2, ++it_res) {
        int carry = 0;
        auto temp_it_res = it_res;
        for (it1 = num1.rbegin(); it1 != num1.rend(); ++it1, ++temp_it_res) {
            int prod = (*it1) * (*it2) + (*temp_it_res) + carry;
            carry = prod / 10;
            *temp_it_res = prod % 10;
        }
        *temp_it_res += carry;
    }
    while (result.size() > 1 && result.back() == 0) {
        result.pop_back();
    }
    return result;
    }