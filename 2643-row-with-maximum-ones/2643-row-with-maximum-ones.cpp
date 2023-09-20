class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        
        int rowAns = 0;
        int maxOne = 0;

        for(int i = 0; i < mat.size(); i++) {
            int currOnes = accumulate(mat[i].begin(), mat[i].end(), 0);
            if(currOnes > maxOne) {
                maxOne = currOnes;
                rowAns = i;
            }
        }

        return {rowAns, maxOne}; 
    }
};