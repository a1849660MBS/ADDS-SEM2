#include <iostream>
#include <vector>
#include <string>
#include "QuickSort.h"


    std::vector<int> QuickSort::sort(std::vector<int> list){
    int n = list.size();
    if (n <= 1) {
        return list;
    }
    int pivot = list[n-1];
    std::vector<int> left, right;
    for (int i = 0; i < n-1; i++) {
        if (list[i] < pivot) {
            left.push_back(list[i]);
        } else {
            right.push_back(list[i]);
        }
    }
    left = sort(left);
    right = sort(right);
    left.push_back(pivot);
    left.insert(left.end(), right.begin(), right.end());
    return left;



    }
    int QuickSort::partition(std::vector<int>& list, int low, int high){
    
    int pivot = list[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (list[j] < pivot) {
            i++;
            swap(list[i], list[j]);
        }
    }
    swap(list[i+1], list[high]);
    return i+1;
    }

    void QuickSort::swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;

    }
