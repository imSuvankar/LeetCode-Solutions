class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        // kadanes algorithm 
        int ans = INT_MIN;
        int currMax = 0;
        
        for(int i : nums) {
            currMax = max(i, currMax + i);
            ans = max(ans, currMax);
        }
        
        return ans;
    }
};
