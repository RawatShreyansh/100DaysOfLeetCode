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
        int pivot = sqrt(total);

        if((pivot * pivot) == total)
            return pivot;
        return -1;
    }
};