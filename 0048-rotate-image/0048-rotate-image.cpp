class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        /*
        // APPROACH 1: 
        int n = matrix.size();

        // step 1: transpose
        for(int i = 0; i < n; i++) {
            for(int j = i ; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // step 2: row-wise reversing
        for(int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
        */
        
        
        // APPROACH 2:
        int n = matrix.size();
        vector<vector<int>> ans;

        for(int i = 0; i < n; i++) {
            vector<int> temp;
            for(int j = n-1; j >= 0; j--) temp.push_back(matrix[j][i]);
            ans.push_back(temp);
        }

        matrix = ans;
    }
};
