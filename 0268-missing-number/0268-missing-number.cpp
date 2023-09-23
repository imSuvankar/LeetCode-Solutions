class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        /*
        // APPROACH 1:
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++) if(i != nums[i]) return i;
        return nums.size();
        */


        /*
        // APPROACH 2:
        int n = nums.size();
        int expectedSum = n*(n+1)/2;
        int actualSum = 0;
        for(int i = 0; i < n; i++) actualSum += nums[i];
        return expectedSum - actualSum;
        */


        // APPROACH 3:
        int ans = 0;
        for(int i : nums) ans ^= i;
        for(int i = 1; i <= nums.size(); i++) ans ^= i; 
        return ans;
    }
};