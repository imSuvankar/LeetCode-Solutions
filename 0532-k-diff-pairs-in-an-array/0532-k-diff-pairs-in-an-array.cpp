class Solution {
public:
    int findPairs(vector<int>& nums, int k) {

        set<pair<int, int>> ans;
        
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i+1; j < nums.size(); j++) {
                if(abs(nums[i] - nums[j]) == k) {
                    ans.insert({min(nums[i], nums[j]), max(nums[i], nums[j])});
                }
            }
        }

        return ans.size();
    }
};