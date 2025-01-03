class Solution {
public:
    vector<int> vowelStrings(vector<string>& words,
                             vector<vector<int>>& queries) {
        int n = words.size();
        int q = queries.size();

        vector<int> cummSum(n);

        unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u'};

        int sum = 0;
        for (int i = 0; i < n; ++i) {
            if (vowels.contains(words[i].front()) &&
                vowels.contains(words[i].back())) {
                ++sum;
            }
            cummSum[i] = sum;
        }

        vector<int> result(q);

        for (int i = 0; i < q; ++i) {
            int l = queries[i][0], r = queries[i][1];
            result[i] = cummSum[r] - ((l > 0) ? cummSum[l - 1] : 0);
        }
        
        return result;
    }
};