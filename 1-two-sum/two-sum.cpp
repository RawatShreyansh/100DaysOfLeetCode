class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i = 0 ; i <nums.size() ; ++i){
            int newTarget = target-nums[i];
            auto it = mp.find(newTarget);
            if(it != mp.end()){
                return {i,it->second};
            }
            else{
                mp.insert({nums[i] , i});
            }
        }
        return {-1,-1};
    }
};