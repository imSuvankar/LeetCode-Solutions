class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for(int i = 0; i < nums.size(); i++) {
            if(i == 0 || nums[i] != nums[i-1]) {

                int s = i+1;
                int e = nums.size()-1;
                int target = 0-nums[i];

                while(s < e) {
                    if(target == nums[s] + nums[e]) {
                        ans.push_back({nums[i], nums[s], nums[e]});
                        while(s < e && nums[s] == nums[s+1]) s++;
                        while(s < e && nums[e-1] == nums[e]) e--;
                        s++, e--;
                    }

                    else if(target < nums[s] + nums[e]) e--;
                    else s++;
                }
            }
        }

        return ans;
    }
};