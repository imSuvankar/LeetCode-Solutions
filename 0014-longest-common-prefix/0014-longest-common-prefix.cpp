class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans = "";
        string minStr = *min_element(strs.begin(), strs.end());

        for(int i = 0; i < minStr.size(); i++) {
            bool flag = true;
            char curr = minStr[i];

            for(int j = 0; j < strs.size(); j++) {
                if(i < strs[j].size() && strs[j][i] != curr) {
                    flag = false;
                    break;
                }
            }

            if(flag) ans += curr;
            else break;
        }

        return ans;
    }
};