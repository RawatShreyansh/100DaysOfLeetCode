class Solution {
public:
    int inti = []{
        ios_base::sync_with_stdio(NULL);
        cout.tie(NULL);
        cin.tie(NULL);
        return 1;
    }();
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size(), zero = 0, low = 0, high = 0, res = INT_MIN;
        for(high = 0; high < n; ++high){
            if(nums[high] == 0){
                ++zero;
            }
            while(zero > k){
                if(nums[low] == 0){
                    --zero;
                }
                ++low;
            }
            res = max(res,(high - low + 1));
        }
        return res;
    }
};