class Solution {
public:
    const int init = []() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        return 0;
    }();
    int firstUniqChar(string s) {

        unordered_map<char, int> mp;
        for (auto& i : s)
            mp[i]++;

        for (int i = 0; i < s.length(); i++)
            if (mp[s[i]] == 1)
                return i;

        return -1;
    }
};