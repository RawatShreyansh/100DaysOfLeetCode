class Solution {
public:
    int inti = []{
        ios_base::sync_with_stdio(NULL);
        cin.tie(NULL);
        cout.tie(NULL);
        return  0;
    }();
    string helper(string s){
        int num = 0;
        for(const char& ch : s){
            num += ch - '0';
        }
        return to_string(num);
    }
    string digitSum(string s, int k) {
        int n = 0;
        string temp = s, ans = "";
        while(temp.size() > k){
            n = temp.size();
            ans = "";
            for(int i = 0; i < n; i+= k){
                ans += helper(temp.substr(i,k));
            }
            temp = ans;
        }

        return temp;
    }
};