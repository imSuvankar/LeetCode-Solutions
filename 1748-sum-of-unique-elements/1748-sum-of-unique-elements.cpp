class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        map<int, int> intMap;
        for(int i : nums) intMap[i]++;

        int ans = 0;
        for(auto i : intMap) if(i.second == 1) ans += i.first;
        return ans;
    }
};