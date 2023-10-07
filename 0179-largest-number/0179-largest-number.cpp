bool comp(string a, string b) {
    return a+b > b+a;
}


class Solution {
public:
    string largestNumber(vector<int>& nums) {
        
        vector<string> strs;
        for(int i : nums) strs.push_back(to_string(i));
        sort(strs.begin(), strs.end(), comp);

        string ans = "";
        for(string s : strs) ans += s;

        if(ans[0] == '0' && 1 < ans.size()) {
            while(ans.front() == '0') ans.erase(0,1);
        }

        return ans.empty() ? "0" : ans;
    }
};