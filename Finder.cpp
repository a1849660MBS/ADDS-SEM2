#include "Finder.h"
using namespace std;
vector<int> Finder::findSubstrings(string s1, string s2) {
vector<int> result;
size_t start = 0;
while (start < s1.size()) {
size_t found = s1.find(s2, start);
if (found != string::npos) {
result.push_back(found);
start = found + 1;
} else {
result.push_back(-1);
break;
}
}
return result;
}