class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        /*
        // RECURSIVE
        if(s.find(part) == string::npos) return s;

        auto it = s.find(part); 
        s.erase(it, part.size());
        return removeOccurrences(s, part);
        */

        
        // ITERATIVE
        while(s.find(part) != string::npos) s.erase(s.find(part), part.size());
        return s;
    }
};
