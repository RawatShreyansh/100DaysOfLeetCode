class Solution {
public:
    const int start = []() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        return 0;
    }();
    string minWindow(string s, string t) {

        int n = s.size();
        int m = t.size();
        if (m > n)
            return "";

        unordered_map<char, int> mp;
        for (auto& ch : t)
            mp[ch]++;

        int count = t.size();
        int i = 0, j = 0;

        int ans = INT_MAX;
        int start = 0;

        while (j < n) {
            char c = s[j];

            if (mp[c] > 0)
                count--;
            mp[c]--;

            while (count == 0) {
                int currWin = j - i + 1;
                if (ans > currWin) {
                    ans = currWin;
                    start = i;
                }
                mp[s[i]]++;
                if (mp[s[i]] > 0)
                    count++;
                i++;
            }
            j++;
        }

        if (ans == INT_MAX)
            return "";
        return s.substr(start, ans);
    }
};