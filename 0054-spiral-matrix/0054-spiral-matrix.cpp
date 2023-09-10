class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int total = row*col;

        int startRow = 0;
        int endCol = col-1;
        int endRow = row-1;
        int startCol = 0;

        vector<int> ans;
        int count = 0;

        while(count < total) {

            // getting startRow elements
            for(int i = startCol; count < total && i <= endCol; i++) {
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;

            // getting endCol elements
            for(int i = startRow; count < total && i <= endRow; i++) {
                ans.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;

            // getting endRow elements
            for(int i = endCol; count < total && i >= startCol; i--) {
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;

            // getting startCol elements
            for(int i = endRow; count < total && i >= startRow; i--) {
                ans.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++;
        }

        return ans;
    }
};