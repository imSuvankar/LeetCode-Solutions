class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        if(nums[start] < nums[end]) return nums[start];

        else {
            int mid = start + (end - start) / 2;
            while(start < end) {
                if(nums[mid] >= nums[0]) start = mid + 1;
                else end = mid;
                mid = start + (end - start) / 2;
            }
            return nums[mid];
        }

    }
};