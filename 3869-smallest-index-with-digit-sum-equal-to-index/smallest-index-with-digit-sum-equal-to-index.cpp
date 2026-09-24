class Solution {
public:
    int digit_sum(int val){
        int sum = 0;
        while(val > 0){
            sum += (val%10);
            val /= 10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; ++i){
            if(digit_sum(nums[i]) == i) return i;
        }
        return -1;
    }
};