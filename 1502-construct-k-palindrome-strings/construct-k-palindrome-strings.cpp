const int init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    return 0;
}();
class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.size();

        if (n < k)
            return false;
        if (n == k)
            return true;

        vector<int> freq(26,0);
        for(char &ch : s){
            ++freq[ch-'a'];
        }

        int odd_count = 0;

        for (int& i : freq) {
            odd_count += i&1;
        }

       return odd_count <= k;
    }
};