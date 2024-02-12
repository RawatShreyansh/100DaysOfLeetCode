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

        int ele , counter = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if(counter == 0)
            {
                counter = 1;
                ele = nums[i];
            }
            else if(nums[i] == ele)
            {
                counter++;
            }
            else 
            {
                counter--;
            }
        }

        int counter1 = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if(nums[i] == ele)
            {
                counter++;
            }
        }
        if(counter > n/2)
            return ele;
        
        return -1;
    }
};