const int init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    return 0;
}();
class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.size();

        if (n < k)
            return false;
        if (n == k)
            return true;

        unordered_map<char, long long> freq;
        for (int i = 0; i < n; ++i) {
            freq[s[i]]++;
        }

        int odd_count = 0;

        for (auto& i : freq) {
            if ((i.second & 1) == 1) {
                ++odd_count;
            }
        }

       return odd_count <= k;
    }
};