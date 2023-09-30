// same as -> 647. Palindromic Substrings
// instead of the total number of valid substrings, it just asks for the longest one


class Solution {
private:
    string expand(string s, int i, int j) {
        while(0 <= i && j < s.size() && s[i] == s[j]) i--, j++;
        return s.substr(i+1, j-i-1);
    }


public:
    string longestPalindrome(string s) {
        string ans = "";

        for(int i = 0; i < s.size(); i++) {
            string odd = expand(s, i, i);
            string even = expand(s, i, i+1);

            if(ans.size() < odd.size()) ans = odd;
            if(ans.size() < even.size()) ans = even;
        }

        return ans;
    }
};
