class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
        bool cond1 = true;
        for(int i = 0; i < nums.size()-1; i++) {
            if(nums[i] > nums[i+1]) {
                cond1 = false;
                break;
            }
        }
        
        bool cond2 = true;
        for(int i = 0; i < nums.size()-1; i++) {
            if(nums[i] < nums[i+1]) {
                cond2 = false;
                break;
            }
        }

        return cond1 || cond2;
    }
};