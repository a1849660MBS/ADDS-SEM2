#ifndef HEAP_H
#define HEAP_H

#include <vector>
#include <cmath> // for floor()

template <typename T>
class Heap {
 private:
  std::vector<T> values;
  void heapify(int);

 public:
  Heap();  // constructs an empty heap

  // constructs a heap with the values from the given vector
  // the type T MUST provide comparison operators <, >, ==
  Heap(std::vector<T>);

  void insert(T);
  void remove(T);
  T getMin();
};

/*******************************/
// default constructor
/*******************************/

template <typename T>
Heap<T>::Heap() {}

/*******************************/
// constructs a heap with the values in the given vector
// the type T MUST provide comparison operators <, >, ==
/*******************************/

template <typename T>
Heap<T>::Heap(std::vector<T> start_values) {
  // copy the values into our heap vector
  for (int i = 0; i < start_values.size(); i++) {
    values.push_back(start_values.at(i));
  }

  // starting from last non-leaf node (last parent), heapify each
  // of the parents
  int initial_parent_index = floor((values.size()-1) / 2);
  for (int parent_index = initial_parent_index; parent_index >= 0;
       parent_index--) {
    heapify(parent_index);
  }
}

/*******************************/
// add values to the heap
/*******************************/

template <typename T>
void Heap<T>::insert(T value) {
  values.push_back(value); // Add the value to the end of the vector

  int child_index = values.size() - 1; // Index of the inserted value

  // Find the parent index and keep swapping until the heap property is satisfied
  while (child_index > 0) {
    int parent_index = floor((child_index - 1) / 2);

    if (values[child_index] < values[parent_index]) {
      // Swap child and parent
      T temp = values[child_index];
      values[child_index] = values[parent_index];
      values[parent_index] = temp;

      child_index = parent_index; // Update the child index
    } else {
      break; // Heap property is satisfied, no need to swap further
    }
  }
}

/*******************************/
/* delete values from the heap */
/*******************************/

template <typename T>
void Heap<T>::remove(T value) {
  // Find the index of the value to be removed
  auto it = std::find(values.begin(), values.end(), value);
  if (it == values.end()) {
    return; // Value not found in the heap
  }

  int index = std::distance(values.begin(), it);

  // Swap the value with the last element in the heap
  values[index] = values.back();
  values.pop_back();

  // Heapify the swapped element to restore the heap property
  heapify(index);
}

/*******************************/
// find the smallest value in the heap
/*******************************/

template <typename T>
T Heap<T>::getMin() {
  if (values.empty()) {
    throw std::out_of_range("Heap is empty");
  }

  return values[0]; // The minimum value is always at the root
}

/*******************************/
// private function to heapify a given 'node'
/*******************************/

template <typename T>
void Heap<T>::heapify(int parent_index) {
  // if we're outside the index range, return
  if (parent_index < 0 || parent_index >= values.size()) return;

  // find children indexes
  int left_child_index = parent_index * 2 + 1;
  int right_child_index = parent_index * 2 + 2;

  // if parent is larger than child, swap with smallest child
  int index_of_smallest = parent_index;

  // check if left child exists and if exists, is smallest value there
  if (left_child_index < values.size() &&
      values.at(left_child_index) < values.at(index_of_smallest)) {
    // make this index the current smallest
    index_of_smallest = left_child_index;
  }

  // check if left child exists and if exists, is smallest value there
  if (right_child_index < values.size() &&
      values.at(right_child_index) < values.at(index_of_smallest)) {
    // make this index the current smallest
    index_of_smallest = right_child_index;
  }

  // if parent is not smallest, swap with smallest child
  if (index_of_smallest != parent_index) {
    T temp = values.at(parent_index);
    values.at(parent_index) = values.at(index_of_smallest);
    values.at(index_of_smallest) = temp;

    // heapify the swapped index - it may need to move
    // further down the 'tree'
    heapify(index_of_smallest);
  }
}

#endif
