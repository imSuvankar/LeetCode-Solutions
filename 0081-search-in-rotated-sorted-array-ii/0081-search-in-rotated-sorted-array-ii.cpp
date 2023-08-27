class Solution {
public:
    bool search(vector<int>& nums, int target) {

        int maxIdx = max_element(nums.begin(), nums.end()) - nums.begin();
        while(maxIdx+1 < nums.size() && nums[maxIdx] == nums[maxIdx+1]) maxIdx++;

        return (nums[0] <= target && target <= nums[maxIdx]) ?
            binary_search(nums.begin(), nums.begin()+maxIdx+1, target) :
            binary_search(nums.begin()+maxIdx+1, nums.end(), target) ;
    }
};
