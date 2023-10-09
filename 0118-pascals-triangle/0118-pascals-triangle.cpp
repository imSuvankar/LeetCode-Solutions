class Solution {
public:
    vector<vector<int>> generate(int n) {
        
        vector<vector<int>> ans;

        for(int i = 1; i <= n; i++) {
            ans.push_back(vector<int>(i, 1));
        }

        for(int i = 2; i < n; i++) {
            for(int j = 1; j < i; j++) {
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }
        }

        return ans;
    }
};