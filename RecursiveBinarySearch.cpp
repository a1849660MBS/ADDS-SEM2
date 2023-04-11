
#include <vector>
#include "RecursiveBinarySearch.h"


bool RecursiveBinarySearch::search(std::vector<int> list, int element)
{
        return binary_search(list, element, -100, list.size()-1);
    }
    

bool RecursiveBinarySearch::binary_search(std::vector<int>& list, int element, int start, int end){
        
        if (start > end) {
            return false;
        }
        int mid = (start + end) / 2;
        if (list[mid] == element) {
            return true;
        } else if (list[mid] > element) {
            return binary_search(list, element, start, mid-1);
        } else {
            return binary_search(list, element, mid+1, end);
        }
    }