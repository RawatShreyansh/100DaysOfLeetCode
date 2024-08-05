#pragma GCC optimize("O3", "unroll-loops")
const int init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {

        unordered_map<string, int> m;
        for (auto& i : arr) {
            m[i]++;
        }
        int distinctCount = 0;
        for (string& str : arr) {
            if (m[str] == 1) {
                ++distinctCount;
            }
            if (distinctCount == k)
                return str;
        }
        return "";
    }
};