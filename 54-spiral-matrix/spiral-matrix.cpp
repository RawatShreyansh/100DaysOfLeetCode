#pragma GCC optimize("O2", "unroll-loops")

const int init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        int top = 0;
        int bottom = n - 1;
        int right = m - 1;
        int left = 0;

        // directions
        int direction = 0;
        /*
         * dir == 0  : left to right : top constant
         * dir == 1  : top to bottom : right constant
         * dir == 2  : right to left : bottom constant
         * dir == 3  : bottom to top : left constant
         */

        vector<int> spiralRoute;

        while (top <= bottom && left <= right) {
            if (direction == 0) {
                for (int i = left; i <= right; ++i) {
                    spiralRoute.push_back(matrix[top][i]);
                }
                ++top;
            }

            if (direction == 1) {
                for (int i = top; i <= bottom; ++i) {
                    spiralRoute.push_back(matrix[i][right]);
                }
                --right;
            }

            if (direction == 2) {
                for (int i = right; i >= left; --i)
                    spiralRoute.push_back(matrix[bottom][i]);
                --bottom;
            }

            if (direction == 3) {
                for (int i = bottom; i >= top; --i)
                    spiralRoute.push_back(matrix[i][left]);
                ++left;
            }

            ++direction;

            if (direction == 4)
                direction = 0;
        }
        return spiralRoute;
    }
};