#include "Finder.h"
#include <string>
using namespace std;
vector<int> Finder::findSubstrings(string s1, string s2) {
    vector<int> result;
    
    if (s2.size() > s1.size()) {
        return result;
    }
    // Create prefix table
    vector<int> pi(s2.size());
    for (int i = 0, j = 0; i < s2.size(); i++) {
        while (j > 0 && s2[i] != s2[j]) {
        j = pi[j-1];
        }
        if (s2[i] == s2[j]) {
            j++;
        }
        pi[i] = j;
    }

    // Search for s2 in s1

    for (int i = 0, j = 0; i < s1.size(); i++) {
        while (j > 0 && s1[i] != s2[j]) {
            j = pi[j-1];
        }
        if (s1[i] == s2[j]) {
            j++;
        }

        if (j == s2.size()) {
            result.push_back(i - n + 1);
            j = pi[j-1];

        }

    }

    // Add -1 for missing substrings

    if (result.empty()) {
        result.push_back(-1);

    } else {
        while (result.size() < n) {
            result.push_back(-1);
        }
    }

    return result;

}
