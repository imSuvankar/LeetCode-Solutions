class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> intMap;

        for(int i = 0; i < nums.size(); i++) {
            auto it = intMap.find(target - nums[i]);
            if(it != intMap.end()) return {it->second, i};
            intMap[nums[i]] = i;
        }
        return {};
    }
};