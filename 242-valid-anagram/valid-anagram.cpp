class Solution {
public:
    const int init = []() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        return 0;
    }();
    bool isAnagram(string s, string t) {

        if(s.length() != t.length())
            return false;
        
        vector<int> s1(26,0);
        vector<int> t1(26,0);

        for(int i = 0 ; i < s.length(); i++)
        {
            s1[s[i] - 'a']++;
            t1[t[i] - 'a']++;
        }

        if(s1 == t1)
            return true;
        return false;
    }
};