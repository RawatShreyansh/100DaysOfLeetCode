const int init = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int> m;
        int n = arr.size();
        for(int i = 0 ; i < n ; ++i){
            m[arr[i]]++;
            m[target[i]]--;
        }
        for(auto &i : m){
            if(i.second != 0){
                return false;
            }
        }
        return true;
    }
};