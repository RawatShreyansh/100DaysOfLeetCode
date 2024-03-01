int init = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.length();
        string result = string(n,'0');

        int i = 0;
        for(char &ch : s){
            if(ch == '1'){
                if(result[n-1] == '1'){
                    result[i] = '1';
                    i++;
                }
                else{
                    result[n-1] = '1';
                }
            }
        }
        return result;
    }
};