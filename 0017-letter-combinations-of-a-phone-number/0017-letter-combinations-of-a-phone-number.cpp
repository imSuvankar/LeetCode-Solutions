class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<char, string> mob = {
            {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"},
            {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
        };
        
        vector<string> ans;
        if(digits.empty()) return ans;

        if(1 <= digits.size()) {
            for(char c : mob[digits[0]]) {
                ans.push_back(string(1, c));
            }
        }

        for(int i = 1; i < digits.size(); i++) {
            vector<string> temp;
            for(string s : ans) {
                for(char c : mob[digits[i]]) {
                    temp.push_back(s + c);
                }
            }
            ans = temp; 
        }

        return ans;
    }
};
