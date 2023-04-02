#include "Finder.h"
using namespace std;
vector<int> Finder::findSubstrings(string s1, string s2) {
    vector<int> result;
    result.reserve(s2.size());
    size_t s1_size = s1.size();
    size_t s2_size = s2.size();
    vector<int> pi(s2_size);
    int j = 0;
    for (int i = 1; i < s2_size; i++) {
        while (j > 0 && s2[i] != s2[j]) {
            j = pi[j-1];
        }
        if (s2[i] == s2[j]) {
            j++;
        }
        pi[i] = j;
    }
    j = 0;
    for (int i = 0; i < s1_size; i++) {
        while (j > 0 && s1[i] != s2[j]) {
            j = pi[j-1];
        }
        if (s1[i] == s2[j]) {
            j++;
        }
        if (j == s2_size) {
            result.emplace_back(i - j + 1);
            j = pi[j-1];
        }
    }
    if (result.empty()) {
        result.emplace_back(-1);
    }
    return result;
}