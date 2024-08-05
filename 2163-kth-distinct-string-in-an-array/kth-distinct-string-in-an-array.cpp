#pragma GCC optimize("O2", "unroll-loops")
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
        for (string& str : arr) {
            if(m[str] == 1 && --k == 0)
                return str;
        }
        return "";
    }
};