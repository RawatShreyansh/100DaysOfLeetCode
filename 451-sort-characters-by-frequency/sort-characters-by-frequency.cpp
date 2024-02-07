typedef pair<char,int> p;
class Solution {
public:
    const int init = []() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        return 0;
    }();
    string frequencySort(string s) {
        vector<p> vec(123);

        for(char &ch : s)
        {
            int f = vec[ch].second;
            vec[ch] = {ch,f+1};
        }

        auto lambda = [&](p &p1 , p &p2){
            return p1.second > p2.second;
        };

        sort(vec.begin() , vec.end() , lambda);

        string res ="";
        for(int i = 0 ; i < 123 ; i++)
        {
            if(vec[i].second > 0)
            {
                char ch = vec[i].first;
                int f = vec[i].second;

                string temp = string(f,ch);

                res += temp;
            }
        }
        return res;
    }
};