class Solution {
private:
    string getPattern(string s) {

        string ans = "";
        char mapping[256] = {0};
        char start = 'a';

        for(char c : s) {
            if(mapping[c] == 0) {
                mapping[c] = start;
                start++;
            }
            ans += mapping[c];
        }

        return ans;
    }


public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        string patternOfPattern = getPattern(pattern);

        vector<string> ans;
        for(string s : words) {
            if(patternOfPattern == getPattern(s)) ans.push_back(s);
        }

        return ans;
    }
};