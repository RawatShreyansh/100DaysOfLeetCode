#pragma GCC optimize("O3", "unroll-loops")

const int init = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int pivotInteger(int n) {
        int total = (n*(n+1))/ 2;
        for(int i = 1 ; i <= n ; i++){
            
            int left = (i*(i+1)) /2;
            int right = total - left + i;

            if(left == right)
                return i;
           
        }
        return -1;
    }
};