
class Solution {
private: 
    static const int mod = 1e9+7;
    static pair<int,long long> fSumOfK(vector<int> &nums,int &n,int &target){
        long long currSum=0,window=0,total=0,count=0;
        for(int i=0,j=0; j<n;j++){
            currSum += nums[j];
            window += nums[j]*(j-i+1);
            while(target <  currSum){
                window -= currSum;
                currSum -= nums[i++];
            }
            total += window;
            count += j-i+1;
        }
        return {count,total%mod};
    }
    static int findSum(vector<int> & nums,int& n,int k){
        long long right = accumulate(nums.begin(),nums.end(),0);
        int left = *min_element(nums.begin(),nums.end());
        while(left <= right){
            int mid = (left+right)/2;
            if(fSumOfK(nums,n,mid).first >= k){
                right = mid-1;
            }else{
                left = mid+1;
            }
        }
        auto [cnt,sum] = fSumOfK(nums,n,left); 
        return (sum - left * (cnt-k))%mod;
    }
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int res = (findSum(nums,n,right) - findSum(nums,n,left-1) % mod);
        return res;
    }
};