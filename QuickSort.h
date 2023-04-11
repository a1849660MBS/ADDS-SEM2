#ifndef QUICKSORT_H
#define QUICKSORT_H
#include <iostream>
#include <vector>
#include <string>
#include "Sort.h"

class QuickSort: public Sort{
    public:
    std::vector<int> sort(std::vector<int> list);
    int partition(std::vector<int>& list, int low, int high);
    void swap(int& a, int& b);
};



#endif