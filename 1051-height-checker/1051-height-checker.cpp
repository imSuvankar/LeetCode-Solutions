class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        vector<int> OG = heights;
        sort(heights.begin(), heights.end());
        
        int c = 0;
        for(int i = 0; i < OG.size(); i++) if (OG[i] != heights[i]) c++;
        return c;
    }
};