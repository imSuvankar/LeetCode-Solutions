class Solution {
public:
    int findPairs(vector<int>& nums, int k) {

        /*
        // APPROACH 1: BRUTE FORCE
        set<pair<int, int>> ans;
        
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i+1; j < nums.size(); j++) {
                if(abs(nums[i] - nums[j]) == k) {
                    ans.insert({min(nums[i], nums[j]), max(nums[i], nums[j])});
                }
            }
        }

        return ans.size();
        */



        // APPROACH 2: SORT & TWO POINTER
        sort(nums.begin(), nums.end());

        int i = 0; 
        int j = 1;
        set<pair<int, int>> ans;

        while(j < nums.size()) {
            if(nums[j] - nums[i] == k) {
                ans.insert({nums[i], nums[j]});
                i++, j++;
            }
            else if(nums[j] - nums[i] < k) j++; 
            else i++;

            if(i == j) j++;
        }

        return ans.size(); 
    }
};