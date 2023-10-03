class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        int ans = 0;
        int i = 0;

        while(i < nums.size()) {
            int currNum = nums[i];
            int currCount = 1;
            while(i+1 < nums.size() && currNum == nums[i+1]) currCount++, i++; 
            
            ans += currCount * (currCount-1) / 2;
            i++;
        }

        return ans;
    }
};