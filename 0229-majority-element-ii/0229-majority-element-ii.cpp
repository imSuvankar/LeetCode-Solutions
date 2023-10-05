class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        map<int, int> intMap;
        for(int i : nums) intMap[i]++;

        vector<int> ans;
        for(auto i : intMap) if(i.second > nums.size()/3) ans.push_back(i.first);
        return ans;
    }
};