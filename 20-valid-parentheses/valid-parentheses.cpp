class Solution {
public:
    const int init = []() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        return 0;
    }();
    bool isValid(string s) {

        stack<char> st;

        for (char& ch : s) {
            if (ch == '(') {
                st.push(')');
            } else if (ch == '[') {
                st.push(']');
            } else if (ch == '{') {
                st.push('}');
            } else if (st.empty() || st.top() != ch) {
                return false;
            } else {
                st.pop();
            }
        }
        return st.empty();
    }
};