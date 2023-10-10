class Solution {
private:
    int getSetBits(int n) {
        int ans = 0;
        while(n) {
            if(n&1 == 1) ans++;
            n >>= 1;
        }
        return ans;
    }


public:
    vector<int> countBits(int n) {
        
        vector<int> ans;
        for(int i = 0; i <= n; i++) {
            ans.push_back(getSetBits(i));
        }
        return ans;
    }
};