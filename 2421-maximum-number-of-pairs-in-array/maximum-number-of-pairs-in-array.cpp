class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (auto& i : nums)
            mp[i]++;

        vector<int> ans(2);

        for (auto& i : mp) {
            ans[0] += (i.second / 2);
            ans[1] += (i.second % 2);
        }

        return ans;
    }
};