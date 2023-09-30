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