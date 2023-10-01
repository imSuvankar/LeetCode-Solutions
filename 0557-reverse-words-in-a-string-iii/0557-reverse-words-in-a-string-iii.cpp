class Solution {
public:
    string reverseWords(string s) {
        
        string ans = "";

        istringstream iss(s);
        string i;

        while(iss >> i) {
            reverse(i.begin(), i.end());
            ans += i + ' ';
        }

        ans.pop_back();
        return ans;
    }
};