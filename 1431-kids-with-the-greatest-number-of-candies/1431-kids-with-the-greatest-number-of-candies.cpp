class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int maxi = *max_element(candies.begin(), candies.end());

        vector<bool> ans;
        for(int i : candies) ans.push_back((i + extraCandies >= maxi) ? 1 : 0);
        return ans;
    }
};