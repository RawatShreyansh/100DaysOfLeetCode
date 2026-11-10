class Solution {
public:
    int inti = []{
        ios_base::sync_with_stdio(NULL);
        cin.tie(NULL);
        cout.tie(NULL);
        return 1;
    }();
    int minMoves(vector<int>& nums) {
        int min_element = INT_MAX, total_moves = 0;
        for(const int& i : nums){
            min_element = min(min_element, i);
        }

        for(const int& i : nums){
            total_moves += i - min_element;
        }

        return total_moves;
    }
};