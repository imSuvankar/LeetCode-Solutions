class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for(int i = 0; i < nums.size(); i++) {
            if(i == 0 || nums[i] != nums[i-1]) {

                for(int j = i+1; j < nums.size(); j++) {
                    if(j == i+1 || nums[j] != nums[j-1]) {

                        int s = j+1;
                        int e = nums.size()-1;
                        long long currSum = target - (long long)(nums[i]+nums[j]);

                        while(s < e) {
                            if(currSum == nums[s] + nums[e]) {
                                ans.push_back({nums[i], nums[j], nums[s], nums[e]});
                                while(s < e && nums[s] == nums[s+1]) s++;
                                while(s < e && nums[e-1] == nums[e]) e--;
                                s++, e--;
                            }
                            else if(currSum < nums[s] + nums[e]) e--;
                            else s++;
                        }
                    }
                }
            }
        }

        return ans;
    }
};