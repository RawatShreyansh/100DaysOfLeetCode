const int init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";

        int n = word1.size();
        int m = word2.size();

        int i = 0, j = 0;
        while (i < n || j < m) {
            if (i < n) { 
                res += word1[i];
                i++;
            }
            if (j < m){
                res += word2[j];
                j++;
            }
        }
        return res;
    }
};