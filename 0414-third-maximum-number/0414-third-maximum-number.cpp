class Solution {
public:
    int thirdMax(vector<int>& nums) {

        set<int> st(nums.begin(), nums.end());
        vector<int> v(st.begin(), st.end());

        return (v.size() < 3) ? v.back() : v[v.size() - 3];
    }
};