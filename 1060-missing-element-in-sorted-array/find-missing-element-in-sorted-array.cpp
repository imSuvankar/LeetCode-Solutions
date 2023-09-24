#include <bits/stdc++.h>
using namespace std;



int missingElement(vector<int>& nums) {
  int start = 0;
  int end = nums.size() - 1;
  int mid = start + (end - start) / 2; 

  while(start <= end) {
    if(nums[mid] == mid+1) start = mid + 1;
    else end = mid - 1;
    mid = start + (end - start) / 2;
  }

  return mid+1;
}



int main() {
  vector<int> nums = {1,2,3,4,5,7,8,9};
  cout << missingElement(nums);
  return 0;
}
