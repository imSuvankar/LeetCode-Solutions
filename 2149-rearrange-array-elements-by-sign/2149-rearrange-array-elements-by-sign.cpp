class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int> pos, neg;
        for(int i : nums) (i > 0) ? pos.push_back(i) : neg.push_back(i);
        
        vector<int> ans; 
        for(int i = 0; i < pos.size(); i++) {
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }

        return ans;
    }
};