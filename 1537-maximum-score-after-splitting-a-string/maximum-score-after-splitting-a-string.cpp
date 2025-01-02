class Solution {
public:
    int maxScore(string s) {
        int score = 0;
        int n = s.size();

        for (int i = 0; i < n - 1; ++i) {
            int zeroCount = 0, oneCount = 0;
            // counting zeros
            for (int j = 0; j <= i; ++j) {
                if (s[j] == '0') {
                    ++zeroCount;
                }
            }
            // counting ones
            for (int k = i + 1; k < n; ++k) {
                if (s[k] == '1') {
                    ++oneCount;
                }
            }
            score = max(score, (zeroCount + oneCount));
        }
        return score;
    }
};