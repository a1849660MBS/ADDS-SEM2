#include "Finder.h"
using namespace std;
vector<int> Finder::findSubstrings(string s1, string s2) {
    vector<int> result;
    int m = s1.size();
    int n = s2.size();

    // create LPS array for KMP algorithm
    vector<int> lps(n, 0);
    int len = 0;
    int i = 1;
    while (i < n) {
        if (s2[i] == s2[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }

    // use sliding window approach with KMP algorithm
    int i1 = 0, i2 = 0;
    while (i1 < m) {
        if (s1[i1] == s2[i2]) {
            i1++;
            i2++;
        }
        if (i2 == n) {
            result.push_back(i1 - i2);
            i2 = lps[i2 - 1];
        } else if (i1 < m && s1[i1] != s2[i2]) {
            if (i2 != 0) {
                i2 = lps[i2 - 1];
            } else {
                i1++;
            }
        }
    }
    return result;
}