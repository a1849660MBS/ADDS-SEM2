vector<int> Finder::findSubstrings(string s1, string s2) {
    vector<int> result;
    int m = s1.size();
    int n = s2.size();

    if (n > m) {
        return result;
    }

    const int p = 31;  // prime number for hash function
    const int mod = 1e9 + 9;  // mod for hash function

    // Calculate hash values for s2 and for each substring of s1 of length n
    long long hash_s2 = 0;
    long long hash_s1 = 0;
    long long p_pow = 1;
    for (int i = 0; i < n; i++) {
        hash_s2 = (hash_s2 + (s2[i] - 'a' + 1) * p_pow) % mod;
        hash_s1 = (hash_s1 + (s1[i] - 'a' + 1) * p_pow) % mod;
        p_pow = (p_pow * p) % mod;
    }

    for (int i = 0; i <= m - n; i++) {
        if (hash_s1 == hash_s2) {
            bool found = true;
            for (int j = 0; j < n; j++) {
                if (s1[i + j] != s2[j]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                result.push_back(i);
            }
        }
        if (i < m - n) {
            hash_s1 = (hash_s1 - (s1[i] - 'a' + 1) * p_pow + mod) % mod;
            hash_s1 = (hash_s1 * p + s1[i + n] - 'a' + 1) % mod;
        }
    }

    return result;
}