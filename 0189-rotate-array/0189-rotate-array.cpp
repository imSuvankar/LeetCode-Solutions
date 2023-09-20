class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        // APPROACH 1:
        // reverse(nums.begin(), nums.end());
        // reverse(nums.begin(), nums.begin() + (k % nums.size()));
        // reverse(nums.begin() + (k % nums.size()), nums.end());


        // APPROACH 2:
        int n = nums.size();
        vector<int> ans(n);
        for(int i = 0; i < n; i++) ans[(i+k) % n] = nums[i];
        nums = ans;
    }
};