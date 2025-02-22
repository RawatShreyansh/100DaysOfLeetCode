const char init = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        vector<int> alphabets(26,0);
        for(int i = 0 ; i < s.length() ; ++i){
            alphabets[s[i]-'a']++;
            alphabets[t[i]-'a']--;
        }
        for(int &i : alphabets){
            if(i != 0){
                return false;
            }
        }
        return true;
    }
};