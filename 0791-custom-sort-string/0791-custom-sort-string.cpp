string globalStr;

bool comp(char a, char b) {
    return globalStr.find(a) < globalStr.find(b);
}

class Solution {
public:
    string customSortString(string order, string s) {
        globalStr = order;
        
        sort(s.begin(), s.end(), comp);
        return s;
    }
};