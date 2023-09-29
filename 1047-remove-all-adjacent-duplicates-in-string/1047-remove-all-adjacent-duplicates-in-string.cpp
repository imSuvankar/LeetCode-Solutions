class Solution {
public:
    string removeDuplicates(string s) {

        /*
        // APPROACH 1:
        int i = 0;
        while(i < s.size()) {
            if(s[i] == s[i+1]) {
                s.erase(i, 2);
                i = (i == 0) ? 0 : i-1;
                continue;
            }
            i++;
        }
        
        return s;
        */
        

        // APPROACH 2:
        string ans = "";

        for(char i : s) {
            if(ans.empty() || i != ans.back()) ans += i;
            else ans.pop_back();
        }

        return ans;
    }
};