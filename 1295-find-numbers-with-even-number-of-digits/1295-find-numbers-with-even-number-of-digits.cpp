class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c = 0;
        for(int i : nums) if(int(log10(i)+1) % 2 == 0) c++;
        return c;
    }
};