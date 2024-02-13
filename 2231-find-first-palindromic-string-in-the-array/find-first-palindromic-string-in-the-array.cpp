const int init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto &i : words){
            string rev = "";
            for(auto &j : i)
            {
                rev = j + rev;
            }
            if(rev == i){
                return i;
            }
        }
        return "";
    }
};