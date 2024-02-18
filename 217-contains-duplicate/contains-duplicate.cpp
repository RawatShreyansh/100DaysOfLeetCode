
const int init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (auto& i : nums)
            mp[i]++;

        bool res = false;
        for (auto& i : mp)
            if (i.second > 1)
                res = true;
        return res;
    }
};