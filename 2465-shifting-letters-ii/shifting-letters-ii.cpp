class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = shifts.size();

        int len = s.size();

        vector<int> diff_array(len);

        for (auto& queries : shifts) {
            int left = queries[0];
            int right = queries[1];
            int direction = queries[2];

            int x;
            if (direction == 0)
                x = -1;
            else
                x = 1;

            diff_array[left] += x;
            if (right + 1 < len)
                diff_array[right + 1] -= x;
        }

        for (int i = 1; i < len; ++i) {
            diff_array[i] += diff_array[i - 1];
        }

        for (int i = 0; i < len; ++i) {
            diff_array[i] = diff_array[i] % 26;
            if (diff_array[i] < 0) {
                diff_array[i] += 26;
            }

            s[i] = (((s[i] - 'a') + diff_array[i]) % 26) + 'a';
        }
        return s;
    }
};