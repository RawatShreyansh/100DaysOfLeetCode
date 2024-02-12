int init = []()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;

        for(auto &i : nums)
        {
            res = res ^ i;
        }
        return res;
    }
};