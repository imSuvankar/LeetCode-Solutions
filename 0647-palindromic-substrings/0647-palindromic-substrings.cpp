/*
// APPROACH 1: O(n^3) -> checking for every substring 
class Solution {
private:
    bool check(string s) {
        int i = 0, j = s.size()-1;
        while(i < j) if(s[i++] != s[j--]) return false;
        return true;
    }

public:
    int countSubstrings(string s) {
        int ans = 0;
        for(int i = 0; i < s.size(); i++) {
            string subString = "";
            for(int j = i; j < s.size(); j++) {
                subString += s[j];
                if(check(subString)) ans++;
            }
        }
        return ans;
    }
};
*/


// APPROACH 2: O(n) -> even-odd apprach (LB)
class Solution {
private:
    int expand(string s, int i, int j) {
        int c = 0;
        while(0 <= i && j < s.size() && s[i--] == s[j++]) c++;
        return c;
    }

public:
    int countSubstrings(string s) {
        int ans = 0;
        for(int i = 0; i < s.size(); i++) ans += expand(s, i, i) + expand(s, i, i+1);
        return ans;
    }
};
