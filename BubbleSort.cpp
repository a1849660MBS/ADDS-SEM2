#include <iostream>
#include <vector>
#include <string>
#include "BubbleSort.h"

using namespace std;
vector<int> BubbleSort::sort(vector<int> list){
 // loop to access each array element

 size_t size = list.size();
  for (int step = 0; step < size; ++step) {
      
    // loop to compare array elements
    for (int i = 0; i < size - step; ++i) {

      // compare two adjacent elements
      // change > to < to sort in descending order
      if (list[i] > list[i + 1]) {

        // swapping elements if elements
        // are not in the intended order
        int temp = list[i];
        list[i] = list[i + 1];
        list[i + 1] = temp;
      }
    }
  }
    return list;
}