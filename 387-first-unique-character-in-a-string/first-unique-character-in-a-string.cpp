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

        int ans = INT_MAX;
        int n = s.length();

        for (int i = 0; i < n; i++)
            if (mp[s[i]] == 1)
                ans = min(ans, i);

        if(ans == INT_MAX)
            return -1;
        return ans;
    }
};