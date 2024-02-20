const int init = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        for(auto &i : nums)
            s += i;
        n = n*(n+1) / 2;

        return (n-s);
    }
};