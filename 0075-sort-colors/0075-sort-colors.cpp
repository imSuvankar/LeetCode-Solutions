class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        // sorting -> O(nlogn)
        // counting / 3-pointer -> O(n) 
        // here solved using counting approach

        map<int, int> intMap;
        for(int i : nums) intMap[i]++;

        nums.clear();
        for(auto i : intMap) nums.insert(nums.end(), i.second, i.first); 
    }
};
