class Solution {
public:
    bool isValid(string s) {
        while (s.find("()") != string::npos || s.find("{}") != string::npos || s.find("[]") != string::npos) {
            if (s.find("()") != string::npos) s = s.replace(s.find("()"), 2, "");
            if (s.find("{}") != string::npos) s = s.replace(s.find("{}"), 2, "");
            if (s.find("[]") != string::npos) s = s.replace(s.find("[]"), 2, "");
        }
        return s.empty();
    }
};