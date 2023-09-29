class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        string s1;
        for(char c : s) {
            if(c == '#') {
                if(!s1.empty()) s1.pop_back();
                else continue;
            }
            else s1 += c;
        }
        
        string s2;
        for(char c : t) {
            if(c == '#') {
                if(!s2.empty()) s2.pop_back();
                else continue;
            }
            else s2 += c;
        }

        cout << s1 << "_" << s2 << endl;

        return s1 == s2;
    }
};