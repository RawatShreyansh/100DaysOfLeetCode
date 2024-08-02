#pragma GCC optimize("O3", "unroll-loops")
const int init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int countSeniors(vector<string>& details) {
        int SeniorCitizenCount = 0;

        for (string& str : details) {
            int age = (((str[11] - '0') * 10) + (str[12] - '0'));
            cout << age << " ";
            if (age > 60)
                ++SeniorCitizenCount;
        }
        return SeniorCitizenCount;
    }
};