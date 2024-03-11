const int init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    string customSortString(string order, string s) {
        vector<int> idx(26,-1);

        for(int i = 0 ; i < order.length(); i++){
            char ch = order[i];
            idx[ch - 'a'] = i;
        }

        auto Comparator = [&idx](char &ch1, char &ch2){
            return idx[ch1 -'a'] < idx[ch2 - 'a'];
        };

        sort(begin(s) , end(s) , Comparator);
        return s;
    }
};