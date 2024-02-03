#define all(v)  v.begin(),v.end()

const int ZERO = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(all(nums));
        int n = nums.size();
        vector<vector<int>> ret;
        for (int i = 0; i < n-1; i+=3) {
            if(nums[i + 2] - nums[i] > k) {
                return {};
            }
            ret.push_back({nums[i], nums[i+1], nums[i+2]});
        }
        return ret;
    }
}s;