class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int ans = 0;
        int i = 0;
        int j = height.size()-1;
        
        while(i < j) {
            int curr = (j-i) * min(height[i], height[j]);
            if(ans < curr) ans = curr;
            
            (height[i] < height[j]) ? i++ : j--;
        }
        
        return ans; 
    }
};