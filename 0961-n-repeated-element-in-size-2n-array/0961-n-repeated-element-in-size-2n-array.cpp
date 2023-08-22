class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size() / 2;
        map<int, int> intMap;

        for(int i : nums) {
            intMap[i]++;
            if(intMap[i] == 2) return i;
        }

        return 0;
    }
};