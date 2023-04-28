#include "bigNumCalc.h"

#include <string>
#include <numeric>
#include <vector>
#include <list>

std::list<int> bigNumCalc::buildBigNum(std::string numString)
{
    std::list<int> result;

    for (char c : numString)
    {
        int digit = c - '0';
        result.push_back(digit);
    }

    return result;
}

std::list<int> bigNumCalc::add(std::list<int> num1, std::list<int> num2)
{

    std::list<int> result;
    int carry = 0;
    while (!num1.empty() || !num2.empty() || carry)
    {
        int digit1 = num1.empty() ? 0 : num1.back();
        int digit2 = num2.empty() ? 0 : num2.back();
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result.push_front(sum % 10);
        if (!num1.empty())
        {
            num1.pop_back();
        }
        if (!num2.empty())
        {
            num2.pop_back();
        }
    }
    return result;
}

std::list<int> bigNumCalc::sub(std::list<int> num1, std::list<int> num2)
{
    std::list<int> result;
    int borrow = 0;
    while (!num1.empty() || !num2.empty())
    {
        int digit1 = num1.empty() ? 0 : num1.back();
        int digit2 = num2.empty() ? 0 : num2.back();
        int diff = digit1 - digit2 - borrow;
        borrow = diff < 0;
        result.push_front((diff + 10) % 10);
        if (!num1.empty())
        {
            num1.pop_back();
        }
        if (!num2.empty())
        {
            num2.pop_back();
        }
    }
    while (!result.empty() && result.front() == 0)
    {
        result.pop_front();
    }
    return result;
}

std::list<int> bigNumCalc::mul(std::list<int> num1, std::list<int> num2)
{
    std::list<int> result;
    int carry = 0;
    for (int digit : num1) {
        int prod = digit * num2.front() + carry;
        carry = prod;
        result.push_back(prod%10);
        result.pop_front();
    }
    if (carry > 0) {
        result.push_back(carry);
    }

    return result;
}