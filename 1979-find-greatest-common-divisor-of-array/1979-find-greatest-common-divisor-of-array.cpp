class Solution {
private:
    int getGCD(int a, int b) {
        if(a == 0) return b;
        if(b == 0) return a;
        return getGCD(max(a, b) - min(a, b), min(a, b)); 
    }


public:
    int findGCD(vector<int>& nums) {
        
        int max = INT_MIN;
        int min = INT_MAX;
        for(int c : nums) {
            if(max < c) max = c;
            if(c < min) min = c; 
        }

        return getGCD(max, min);
    }
};