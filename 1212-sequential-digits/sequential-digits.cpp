class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {

        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        queue<int> q;
        for (int i = 1; i <= 8; i++) {
            q.push(i);
        }
        vector<int> ans;
        while (!q.empty()) {
            int temp = q.front();
            q.pop();

            if (temp >= low && temp <= high) {
                ans.push_back(temp);
            }
            int ls = temp % 10;
            if (ls + 1 <= 9) {
                q.push(temp * 10 + (ls + 1));
            }
        }
        return ans;
    }
};