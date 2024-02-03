class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {

        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int n = nums.size();
        vector<vector<int>> ans;
        sort(begin(nums), end(nums));

        for (int i = 0; i < n; i += 3) {
            if (nums[i + 2] - nums[i] > k) {
                return {};
            }

            ans.push_back({nums[i], nums[i + 1], nums[i + 2]});
        }

        return ans;
    }
};