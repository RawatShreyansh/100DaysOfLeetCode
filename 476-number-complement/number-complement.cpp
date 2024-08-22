const int init = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int findComplement(int num) {
        if(num == 1) return 0;
        if(num == 0) return 1;

        int n = num;
        int mask = 0;

        while(n != 0){
            mask = mask << 1 | 1;
            n = n >> 1;
        }

        int ans = (~num) &  mask;
        return ans;
    }
};