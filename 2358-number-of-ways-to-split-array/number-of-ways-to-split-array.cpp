class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();

        int validSplits = 0;
        long long left = 0, right = 0, totalSum = 0;

        for (int& i : nums) {
            totalSum += i;
        }

        for (int i = 0; i < n - 1; ++i) {
            left += nums[i];
            right = totalSum - left;

            if (left >= right) {
                ++validSplits;
            }
        }

        return validSplits;
    }
};