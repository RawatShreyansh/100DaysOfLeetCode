class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.size();

        vector<pair<int, int>> letters(26, {-1, -1});
        for (int i = 0; i < n; ++i) {
            char ch = s[i];
            int idx = ch - 'a';

            if (letters[idx].first == -1) {
                letters[idx].first = i;
            }

            letters[idx].second = i;
        }

        int result = 0;
        for (int i = 0; i < 26; ++i) {

            int left_idx = letters[i].first;
            int right_idx = letters[i].second;

            if (left_idx == -1) {
                continue;
            }

            unordered_set<char> middle_elements;
            for (int j = left_idx + 1; j < right_idx; ++j) {
                middle_elements.insert(s[j]);
            }

            result += middle_elements.size();
        }
        return result;
    }
};