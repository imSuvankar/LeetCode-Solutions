class Solution {
private:
    int findMinIndex(vector<int> arr) {
        int start = 0;
        int end = arr.size() - 1;

        if(arr[start] <= arr[end]) return start;

        else {
            int mid = start + (end - start) / 2;
            while (start < end) {
              if (arr[mid] >= arr[0]) start = mid + 1;
              else end = mid;
              mid = start + (end - start) / 2;
            }
            return mid;
        }
    }



    int binarySearch(vector<int> arr, int start, int end, int target) {
        int mid = start + (end - start) / 2;

        while(start <= end) {
            if(arr[mid] == target) return mid;
            else if(arr[mid] < target) start = mid + 1;
            else end = mid - 1;
            mid = start + (end - start) / 2;
        }

        return -1;
    }



public:
    int search(vector<int>& nums, int target) {
        if(nums.size() == 1) return (nums[0] == target) ? 0 : -1;

        int minIdx = findMinIndex(nums);
        return (nums[minIdx] <= target && target <= nums[nums.size()-1]) ?
            binarySearch(nums, minIdx, nums.size()-1, target) :
            binarySearch(nums, 0, minIdx-1, target);
    }
};