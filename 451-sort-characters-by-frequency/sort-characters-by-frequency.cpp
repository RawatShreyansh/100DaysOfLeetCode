class Solution {
public:
    const int init = []() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        return 0;
    }();
    string frequencySort(string s) {

        unordered_map<char, int> mp;
        for (char ch : s)
            mp[ch]++;

        unordered_map<int, vector<char>> bucket;
        for (auto& i : mp)
            bucket[i.second].push_back(i.first);

        int n = s.length();

        string res = "";
        for (int i = n; i > 0; i--) {
            for (auto& ch : bucket[i]) {
                int temp = i;
                while (temp > 0) {
                    res += ch;
                    temp--;
                }
            }
        }

        return res;
    }
};