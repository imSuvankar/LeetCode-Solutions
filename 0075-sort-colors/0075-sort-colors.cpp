class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        // sorting -> O(nlogn)
        // counting -> O(n) 
        // although it's meant to be solved by sorting, and not map-count method 

        map<int, int> intMap;
        for(int i : nums) intMap[i]++;

        vector<int> ans;
        for(auto i : intMap) ans.insert(ans.end(), i.second, i.first); 
        
        nums = ans;
    }
};