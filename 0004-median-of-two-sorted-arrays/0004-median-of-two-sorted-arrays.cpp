class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> allNums;
        int i = 0;
        int j = 0;

        while(i < nums1.size() && j < nums2.size()) {
            if(nums1[i] == nums2[j]) {
                allNums.push_back(nums1[i]);
                i++;
                allNums.push_back(nums2[j]);
                j++;
            }

            else if(nums1[i] < nums2[j]) {
                allNums.push_back(nums1[i]);
                i++;
            }

            else {
                allNums.push_back(nums2[j]);
                j++;
            }
        }

        allNums.insert(allNums.end(), nums1.begin()+i, nums1.end());
        allNums.insert(allNums.end(), nums2.begin()+j, nums2.end());


        int n = allNums.size();
        return (n & 1) ? allNums[n/2] : (double)(allNums[n/2 - 1] + allNums[n/2]) / 2; 
    }
};
