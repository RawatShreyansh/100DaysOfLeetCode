const int init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {

        vector<int> ans(n+1);

        for(auto &i : trust)
        {
            int u = i[0];
            int v = i[1];

            ans[u]--;
            ans[v]++;
        }

        for(int i = 1 ; i <= n; i++)
        {
            if(ans[i] == n-1)
                return i;
        }
        return -1;
    }
};