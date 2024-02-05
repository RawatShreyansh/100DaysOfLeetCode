class Solution {
public:
    const int init = []() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        return 0;
    }();
    int firstUniqChar(string s) {

        vector<int> ans(26, 0);

        for (int i = 0; i < s.length(); i++)
            ans[s[i] - 'a']++;

        for (int i = 0; i < s.length(); i++)
            if (ans[s[i] - 'a'] == 1)
                return i;

        return -1;
    }
};