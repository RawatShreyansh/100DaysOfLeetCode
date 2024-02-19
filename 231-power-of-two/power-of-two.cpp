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

        return (n&(n-1)) == 0;
    }
};