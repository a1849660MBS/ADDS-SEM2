#include <vector>

class RecursiveBinarySearch {
public:
    bool search(std::vector<int> list, int element);
private:
    bool binary_search(std::vector<int>& list, int element, int start, int end);

};