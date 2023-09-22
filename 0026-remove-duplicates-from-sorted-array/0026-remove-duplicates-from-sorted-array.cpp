class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        /*
        // APPROACH 1 -> using SET
        set<int> st(nums.begin(), nums.end());
        nums = vector<int>(st.begin(), st.end());
        return nums.size();
        */


        // APPROACH 2 -> two pointer
        int i = 0;
        int j = 0;

        while(i < nums.size()) {
            if(nums[i] != nums[j]) nums[++j] = nums[i];
            i++;
        }

        return j+1;
    }
};