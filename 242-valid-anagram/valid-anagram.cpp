class Solution {
public:
    const int init = []() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        return 0;
    }();
    bool isAnagram(string s, string t) {

        sort(s.begin() , s.end());
        sort(t.begin() , t.end());

        return s == t;
    }
};