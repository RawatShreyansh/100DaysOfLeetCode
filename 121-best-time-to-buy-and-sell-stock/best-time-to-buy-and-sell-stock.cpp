const int init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int miniPrice = prices[0];

        for(int i = 1 ; i < n ; i++){
            int gainOrloss = prices[i] - miniPrice;
            profit = max(profit, gainOrloss);
            miniPrice = min(prices[i] , miniPrice);
        }

        return profit;
    }
};