class Solution {
public:
    constexpr int divisierSum(int n, int m) {
        int res = 0;
        for (int i = 1; i <= n; ++i) {
            if (i % m == 0) {
                res += i;
            }
        }
        return res;
    }

    constexpr int nonDivisierSum(int n, int m) {
        int res = 0;
        for (int i = 1; i <= n; ++i) {
            if ((i % m) != 0) {
                res += i;
            }
        }
        return res;
    }
    int differenceOfSums(int n, int m) {
        const int m_divisier = divisierSum(n, m);
        const int m_non_divisier = nonDivisierSum(n, m);

        return (m_non_divisier - m_divisier);
    }
};