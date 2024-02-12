int init = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ofstream out("user.out");

    for (string s; getline(cin, s); out << '\n') {
        int ans = 0;
        int c = 0;

        for (int _i = 1, _n = s.length(); _i < _n; ++_i) {
            bool _neg = false;

            if (s[_i] == '-') {
                ++_i;
                _neg = true;
            }

            int v = s[_i++] & 15;

            while ((s[_i] & 15) < 10)
                v = v * 10 + (s[_i++] & 15);

            if (_neg)
                v = -v;

            if (c == 0)
                ans = v;
            
            ans == v ? ++c : --c;
        }
        out << ans;
    }
    out.flush();
    exit(0);
    return 0;
}();
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        int ele , counter = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if(counter == 0)
            {
                counter = 1;
                ele = nums[i];
            }
            else if(nums[i] == ele)
            {
                counter++;
            }
            else 
            {
                counter--;
            }
        }

        return ele;
    }
};