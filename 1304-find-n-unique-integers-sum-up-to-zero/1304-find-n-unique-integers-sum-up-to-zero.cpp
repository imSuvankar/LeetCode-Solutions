class Solution {
public:
    vector<int> sumZero(int n) {

        if(n == 2) return {-1,1};
        
        vector<int> ans;
        int sum = 0;

        for(int i = 0; i < n-1; i++) {
            ans.push_back(0-i);
            sum += (0-i);
        }

        ans.push_back(0-sum);
        return ans;
    }
};
