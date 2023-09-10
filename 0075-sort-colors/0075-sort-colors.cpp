class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        // sorting -> O(nlogn)
        // counting -> O(n) 
        // although it's meant to be solved by sorting, and not map-count method

        map<int, int> intMap;
        for(int i : nums) intMap[i]++;

        nums.clear();
        for(auto i : intMap) nums.insert(nums.end(), i.second, i.first); 
    }
};