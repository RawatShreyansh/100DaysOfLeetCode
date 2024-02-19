const int init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    bool isPowerOfTwo(int n) {

        if(n <= 0)
            return false;
        
        vector<long long> power;
        power.push_back(1);
        for (long long i = 1; i < 33; i++) {
            power.push_back(power[i - 1] * 2);
        }

        for (auto& i : power) {
            if (i == n)
                return true;
        }

        return false;
    }
};