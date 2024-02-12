class Solution {
public:
    const int inti = []() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        return 0;
    }();
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> mp;
        for (auto& i : nums)
            mp[i]++;

        int res = 0;
        for (auto& i : mp)
            if (i.second > n / 2)
                res = i.first;
        return res;
    }
};