class Solution {
public:
    string convert(string s, int numRows) {
        
        vector<string> rows(numRows, "");

        int c = 0;
        while(c < s.size()) {

            for(int i = 0; i < numRows && c < s.size(); i++) {
                rows[i] += s[c];
                c++;
            }

            for(int i = numRows - 2; i > 0 && c < s.size(); i--) {
                rows[i] += s[c];
                c++;
            }
        }

        string ans = ""; 
        for(string st : rows) ans += st;
        return ans;
    }
};
