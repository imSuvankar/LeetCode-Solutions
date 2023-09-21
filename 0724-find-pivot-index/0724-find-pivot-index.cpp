class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        vector<int> leftSums(n, -1);
        leftSums[0] = nums[0]; 
        
        vector<int> rightSums(n, -1);
        rightSums[n-1] = nums[n-1];
        
        for(int i = 1; i < n; i++) leftSums[i] = leftSums[i-1] + nums[i];
        for(int i = n-2; i >= 0; i--) rightSums[i] = nums[i] + rightSums[i+1];
        
        for(int i = 0; i < n; i++) if(leftSums[i] == rightSums[i]) return i;
        return -1;
    }
};