
const int init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = static_cast <int> (nums.size()) ;
        if ( n == 1 ) return false ;
        std::sort (nums.begin(), nums.end()) ;
        int i {0} ;
        int j {i+1};
        while ( i < n - 1) {
            for ( j = i + 1 ; j < n ; ++ j) {
                if ( nums [j] != nums [i] ) break ;
            }
            if ( j - i > 1 ) return true ;
            i = j;
        }
        return false ;
        
    }
};