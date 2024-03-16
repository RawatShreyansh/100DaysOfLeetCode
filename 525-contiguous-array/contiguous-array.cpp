#pragma GCC optimize("O3", "unroll-loops")
const int init = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int> mp;
        int curr = 0;
        mp[0] = -1;

        int res = 0;

        for(int i = 0 ; i < n ; ++i){
            curr += (nums[i] == 1) ? 1 : -1;

            if(mp.find(curr) != mp.end()){
                res= max(res, i  - mp[curr]);
            }
            else{
                mp[curr] = i;
            }
        }
        return res;
    }
};