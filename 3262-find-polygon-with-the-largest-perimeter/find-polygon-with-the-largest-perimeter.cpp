int init = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        ios::sync_with_stdio(false);
        std::priority_queue<int> q(nums.begin(), nums.end());
        long long sum = std::accumulate(nums.begin(), nums.end(), 0LL);
        while (q.size() > 2) {
            auto t = q.top();
            if (sum - t > t) return sum;
            q.pop();
            sum -= t;
        }
        return -1;
    }
};