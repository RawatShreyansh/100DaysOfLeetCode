#pragma GCC optimize("O3", "unroll-loops")
const int init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int lengthOfLastWord(string s) {

        int ans = 0;

        int i = s.length() - 1;

        while (i >= 0 && s[i] == ' ')
            i--;
        while (i >= 0 && s[i] != ' ') {
            i--;
            ans++;
        }

        return ans;
    }
};