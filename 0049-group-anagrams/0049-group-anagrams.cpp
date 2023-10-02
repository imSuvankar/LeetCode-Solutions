class Solution {
private:
    map<char, int> getMapping(string s) {
        map<char, int> ans;
        for(char c : s) ans[c]++;
        return ans;
    }


public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        // edge case
        if(strs.size() == 1 && strs[0].size() == 0) return {{""}};


        vector<pair<map<char, int>, string>> mapping;
        for(string s : strs) mapping.push_back({getMapping(s), s});
        sort(mapping.begin(), mapping.end());

        int idx = 0;
        auto currMapping = mapping[0].first;
        vector<vector<string>> ans(1, {{mapping[0].second}});

        for(int i = 1; i < strs.size(); i++) {
            if(mapping[i].first == currMapping) {
                ans[idx].push_back(mapping[i].second);
            }
            else {
                ans.push_back({{mapping[i].second}});
                currMapping = mapping[i].first;
                idx++;
            }
        }

        return ans;
    }
};