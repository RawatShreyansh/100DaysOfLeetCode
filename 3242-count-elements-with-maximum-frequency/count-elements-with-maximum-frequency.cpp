const int init = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> Count(101);

        int maxFreq = 0;
        int total = 0;

        for(int i : nums){
            Count[i]++;

            int freq = Count[i];

            if(freq > maxFreq){
                maxFreq = freq;
                total = maxFreq;
            }
            else if(freq == maxFreq) {
                total += maxFreq;
            }
        }
        return total;
    }
};