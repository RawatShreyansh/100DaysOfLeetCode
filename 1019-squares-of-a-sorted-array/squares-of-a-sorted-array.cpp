const int init = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(auto &i : nums){
            i *= i;
        }    
        sort(nums.begin() , nums.end());

        return nums;
    }
};