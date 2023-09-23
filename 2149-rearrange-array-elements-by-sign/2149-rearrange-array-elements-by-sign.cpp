class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        // APPROACH 1:
        vector<int> pos, neg;
        for(int i : nums) (i > 0) ? pos.push_back(i) : neg.push_back(i);
        
        // vector<int> ans; 
        // for(int i = 0; i < pos.size(); i++) {
        //     ans.push_back(pos[i]);
        //     ans.push_back(neg[i]);
        // }
        // return ans;

        // same logic, just modifying the nums array, 
        // instead of taking extra space for "ans"
        for(int i = 0; i < nums.size(); i++) {
            nums[i] = (i % 2 == 0) ? pos[i/2] : neg[i/2];
        }
        return nums;
        


        /*
        // APPROACH 2: two pointer (same complexity) 
        int evenIdx = 0;
        int oddIdx = 1;
        vector<int> ans(nums.size(), -1);

        for(int i = 0; i < nums.size(); i++) {
            if(0 < nums[i]) {
                ans[evenIdx] = nums[i];
                evenIdx += 2;
            }
            else {
                ans[oddIdx] = nums[i];
                oddIdx += 2;
            }
        }

        return ans;
        */
    }
};