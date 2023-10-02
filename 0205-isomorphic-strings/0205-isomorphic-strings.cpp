class Solution {
private:
    string getPattern(string s) {
        
        string ans = "";
        char patterns[256] = {0};
        char start = 'a';

        for(char c : s) {
            if(patterns[c] == 0) {
                patterns[c] = start;
                start++;
            }
            ans += patterns[c];
        }

        return ans;
    } 


public:
    bool isIsomorphic(string s, string t) {
        return getPattern(s) == getPattern(t);
    }
};