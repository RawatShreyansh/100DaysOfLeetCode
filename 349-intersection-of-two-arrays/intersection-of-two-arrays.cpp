const int init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            auto it = find(nums2.begin(), nums2.end(), nums1[i]);
            if (it != nums2.end()) {
                auto it2 = find(ans.begin(), ans.end(), nums1[i]);
                if (it2 == ans.end())
                    ans.push_back(nums1[i]);
            }
        }
        return ans;
    }
};