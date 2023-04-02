#include "Finder.h"

using namespace std;
vector<int> Finder::findSubstrings(string s1, string s2) {

    vector<int> result;

    result.reserve(s2.size());

    size_t s2_size = s2.size();

    string s2_substr;

    for (int i = 0; i <= s2_size; i++) {

        s2_substr = s2.substr(0, i);

        size_t found = s1.find(s2_substr);

        if (found != string::npos) {

            result.emplace_back(found);

        } else {

            result.emplace_back(-1);

        }

    }

    return result;

}
