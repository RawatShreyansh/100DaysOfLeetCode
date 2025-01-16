const int init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        int res = 0;
        if(n&1){
            for(int &i : nums2){
                res ^= i;
            }
        }
        
        if(m&1){
            for(int &i : nums1){
                res ^= i;
            }
        }

        return res;
    }
};