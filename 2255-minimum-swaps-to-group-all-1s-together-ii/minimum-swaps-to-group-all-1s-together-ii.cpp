const int init = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int totalones = 0;

        for(int &i : nums)
            totalones += i;

        int currone = 0;
        for(int i = 0 ; i < totalones ; ++i)
            currone += nums[i];

        int maxones = currone;
        for(int i = 0 ; i < n ; ++i){
            currone -= nums[i];
            currone += nums[(i+totalones)%n];
            maxones = max(maxones , currone);
        } 

        return totalones - maxones;
    }
};