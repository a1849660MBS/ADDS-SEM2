#include "Finder.h"
#include <string>
using namespace std;
vector<int> Finder::findSubstrings(string s1, string s2) {
    vector<int> result;
    int m = s1.size();
    int n = s2.size();
    if (n > m) {
        return result;
    }
    // Create prefix table
    vector<int> pi(n);
    for (int i = 0, j = 0; i < n; i++) {
        while (j > 0 && (s2[i] != s2[j])) {
            j = pi[j-1];
        }
        if (s2[i] == s2[j]) {
            j++;
        }
        pi[i] = j;
    }
    // Search for s2 in s1
    for (int i = 0, j = 0; i < m; i++) {
        while (j > 0 && (s1[i] != s2[j])) {
            j = pi[j-1];
        }
        if (s1[i] == s2[j]) {
            j++;
        }
        if (j == n) {
            result.push_back(i - n +1 ); // fix indexing here
            j = pi[j-1];
        }
    }
    return result;
}