#include <bits/stdc++.h>
using namespace std;


int searchInAlmostSortedArray(vector<int>& nums, int x) {
    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end - start) / 2; 

    while(start <= end) {
        if(nums[mid] == x) return mid;
        else if(0 <= mid-1 && nums[mid-1] == x) return mid-1;
        else if(mid+1 < nums.size() && nums[mid+1] == x) return mid+1;

        else if(nums[mid] < x) start = mid + 1;
        else end = mid - 1;

        mid = start + (end - start) / 2;
    }

    return -1;
}


int main() {
  vector<int> nums = {10, 3, 40, 20, 50, 80, 70};
  int target = 80;
  cout << searchInAlmostSortedArray(nums, target);

  return 0;
}