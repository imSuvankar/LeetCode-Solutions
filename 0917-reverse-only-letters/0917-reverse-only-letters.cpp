class Solution {
public:
    string reverseOnlyLetters(string s) {
        
        // APPROACH 1: 2-pointer
        int i = 0;
        int j = s.size()-1;

        while(i < j) {
            if(isalpha(s[i]) && isalpha(s[j])) swap(s[i++], s[j--]);
            if(!isalpha(s[i])) i++;
            if(!isalpha(s[j])) j--;
        }

        return s;


        /*
        // APPROACH 2: using different variable
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
        */
    }
};