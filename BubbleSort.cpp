#include <iostream>
#include <vector>
#include <string>
#include "BubbleSort.h"

using namespace std;
vector<int> BubbleSort::sort(vector<int> list){
 // loop to access each array element
   int n = list.size();
    // Traverse through all elements in the vector
    for (int i = 0; i < n; i++) {
        // Last i elements are already sorted
        for (int j = 0; j < n-i-1; j++) {
            // Traverse the vector from 0 to n-i-1
            // Swap if the element found is greater than the next element
            if (list[j] > list[j+1]) {
                int temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
}
return list;
}