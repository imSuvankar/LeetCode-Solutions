class Solution {
public:
    string removeDuplicates(string s) {
        
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
    }
};