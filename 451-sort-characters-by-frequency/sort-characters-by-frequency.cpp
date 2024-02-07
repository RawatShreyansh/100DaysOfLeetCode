typedef pair<char,int> P;
class Solution {
public:
    const int init = []() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        return 0;
    }();

    struct lambda{
        bool operator()(P &p1, P &p2){
            return p1.second < p2.second;
        }
    };

    string frequencySort(string s) {

        priority_queue<P,vector<P> , lambda> pq;

        unordered_map<char,int> mp;
        for(char &ch : s)
            mp[ch]++;

        for(auto &i: mp)
        {
            pq.push({i.first,i.second});
        }

        string res="";

        while(!pq.empty())
        {
            P temp = pq.top();
            pq.pop();

            res += string(temp.second , temp.first);
        }
        return res;
    }
};