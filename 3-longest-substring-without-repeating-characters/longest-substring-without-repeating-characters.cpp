class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int low = 0, high = 0, curLen = 0, longestSubStringLength = INT_MIN;

        unordered_map<char,int> freq;

        for(high = 0; high < n; ++high){
            freq[s[high]]++;
            curLen = high - low + 1;

            while(freq.size() < curLen){
                freq[s[low]]--;
                if(freq[s[low]] == 0){
                    freq.erase(s[low]);
                }
                ++low;
                curLen = high - low + 1;
            }

            longestSubStringLength = max(longestSubStringLength, (high - low + 1));
        }

        return (longestSubStringLength == INT_MIN) ? 0 : longestSubStringLength;
    }
};