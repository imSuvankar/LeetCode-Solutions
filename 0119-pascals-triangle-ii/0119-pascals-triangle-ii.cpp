// APPROACH 1: like "Pascal's Triangle I"
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<vector<int>> ans;

        for(int i = 1; i <= rowIndex+1; i++) {
            ans.push_back(vector<int>(i, 1));
        }

        for(int i = 2; i <= rowIndex; i++) {
            for(int j = 1; j < i; j++) {
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }
        }

        return ans.back();
    }
};



/*
// APPROACH 2: SPACE OPTIMISED
class Solution {
private:
    vector<int> getRow(vector<int> v) {
        vector<int> ans = {1};
        for(int i = 0; i < v.size()-1; i++) ans.push_back(v[i] + v[i+1]);
        ans.push_back(1);
        return ans;
    }


public:
    vector<int> getRow(int rowIndex) {
        
        if(rowIndex == 0) return {1};
        else if(rowIndex == 1) return {1,1};

        vector<int> temp = getRow({1,1});
        for(int i = 2; i < rowIndex; i++) {
            temp = getRow(temp);
        }
        return temp;
    }
};
*/