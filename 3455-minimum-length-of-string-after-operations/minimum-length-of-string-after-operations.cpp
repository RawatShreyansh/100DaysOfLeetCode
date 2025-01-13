const int init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char, int> freq;
        for (char& ch : s) {
            freq[ch]++;
        }

        int ans{0};
        for (auto& i : freq) {
            if ((i.second & 1) == 0) {
                ans += 2;
            } else {
                ans += 1;
            }
        }
        return ans;
    }
};