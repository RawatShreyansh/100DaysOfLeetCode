const int init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int minimumLength(string s) {
        vector<int> freq(26, 0);
        for (char& ch : s) {
            freq[ch - 'a']++;
        }

        int res{0};
        for (int i = 0; i < 26; ++i) {
            if (freq[i]) {
                res += ((freq[i] & 1) ? 1 : 2);
            }
        }

        return res;
    }
};