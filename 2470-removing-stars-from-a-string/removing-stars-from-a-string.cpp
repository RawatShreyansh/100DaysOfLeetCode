class Solution {
public:
    int inti = []{
        ios_base::sync_with_stdio(NULL);
        cin.tie(NULL);
        cout.tie(NULL);
        return 1;
    }();
    string removeStars(string s) {
        size_t n = s.length();
        stack<char> characterStack;
        string ans = "";

        for(size_t i = 0; i < n; ++i){
            if(s[i] == '*' && !characterStack.empty()){
                characterStack.pop();
            }else{
                characterStack.push(s[i]);
            }
        }

        while(!characterStack.empty()){
            ans += characterStack.top();
            characterStack.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};