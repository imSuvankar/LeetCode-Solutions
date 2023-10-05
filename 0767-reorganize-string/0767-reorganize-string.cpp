class Solution {
public:
    string reorganizeString(string s) {
        
        // checking on original string
        bool cond1 = true;
        int i = 0;
        int j = i+1;

        while(j < s.size()) {
            if(s[i] == s[j]) {
                while(j < s.size()-1 && s[i] == s[j]) j++;
                i++;
                swap(s[i], s[j]);
                j = i+1;
            }
            i++, j++;
        }

        for(i = 0; i < s.size()-1; i++) {
            if(s[i] == s[i+1]) {
                cond1 = false;
                break;
            }
        }
        
        if(cond1) return s;


        // checking after reversing string 
        // (or you may also check from "i = s.size()-1" and modify acc.)
        reverse(s.begin(), s.end());
        i = 0;
        j = i+1;

        while(j < s.size()) {
            if(s[i] == s[j]) {
                while(j < s.size()-1 && s[i] == s[j]) j++;
                i++;
                swap(s[i], s[j]);
                j = i+1;
            }
            i++, j++;
        }

        for(i = 0; i < s.size()-1; i++) {
            if(s[i] == s[i+1]) return "";
        }

        return s; 
    }
};