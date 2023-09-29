class Solution {
public:
    string removeOccurrences(string s, string part) {
        if(s.find(part) == string::npos) return s;

        auto it = s.find(part);
        s.erase(it, part.size());
        return removeOccurrences(s, part);
    }
};