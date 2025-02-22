const char init = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int &i : nums){
            mp[i]++;
        }
        for(auto &i : mp){
            if(i.second > 1){
                return true;
            }
        }
        return false;
    }
};