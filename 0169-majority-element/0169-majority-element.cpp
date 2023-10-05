class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map<int, int> intMap;
        for(int i : nums) intMap[i]++;

        int ans = 0;
        for(auto i : intMap) if(i.second > nums.size()/2) {
            ans = i.first; break;
        }
        return ans;
    }
};