const int init = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector<int> count(1001);
        int n = arr.size();
        for(int i = 0 ; i < n ; ++i){
            count[arr[i]]++;
            count[target[i]]--;
        }

        for(auto &i : count){
            if(i != 0){
                return false;
            }
        }
        return true;
    }
};