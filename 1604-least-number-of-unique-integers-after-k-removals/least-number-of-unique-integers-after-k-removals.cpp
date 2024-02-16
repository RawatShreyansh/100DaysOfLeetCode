const int init = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        for(auto &i: arr)
        {
            mp[i]++;
        }

        priority_queue<int, vector<int> , greater<int>> pq;
        
        for(auto &i: mp)
        {
            pq.push(i.second);
        }

        while(!pq.empty()){
            k -= pq.top();
            if(k < 0){
                return pq.size();
            }
            pq.pop();
        }
        return 0;
    }
};