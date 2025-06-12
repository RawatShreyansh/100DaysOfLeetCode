class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n = nums.size();
        int maxSum = 0;
        for (int i = 0; i < n; ++i) {
            int diff = INT_MIN;
            if (i == n - 1) {
                diff = abs(nums[i] - nums[0]);
            } else {
                diff = abs(nums[i] - nums[i + 1]);
            }
            maxSum = max(maxSum, diff);
        }
        return maxSum;
    }
};