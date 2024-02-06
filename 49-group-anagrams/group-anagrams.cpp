class Solution {
public:
    const int init = []() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        return 0;
    }();

    string getstr(const string& s) {
        vector<int> count(26, 0);
        for (auto c : s) {
            count[c - 'a']++;
        }

        stringstream ss;
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0)
                ss << (char)('a' + i) << count[i];
        }
        return ss.str();
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> mp;

        for (const string& s : strs) {
            mp[getstr(s)].push_back(s);
        }

        for (const auto& i : mp) {
            res.push_back(i.second);
        }
        return res;
    }
};