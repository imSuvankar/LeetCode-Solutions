class Solution {
public:
    string defangIPaddr(string address) {
        
        string ans = "";
        for(char c : address) (c != '.') ? ans += c : ans += "[.]";
        return ans;
    }
};