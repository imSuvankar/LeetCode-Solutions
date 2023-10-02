class Solution {
public:
    string reverseOnlyLetters(string s) {
        
        string newStr = "";
        for(char c : s) if(isalpha(c)) newStr += c;
        
        int i = 0;
        int j = newStr.size()-1;
        while(i < j) swap(newStr[i++], newStr[j--]);

        j = 0;
        for(int i = 0; i < s.size(); i++) {
            if(isalpha(s[i])) s[i] = newStr[j++];
        }

        return s;
    }
};