class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> n1(nums1.begin(), nums1.end());
        set<int> n2(nums2.begin(), nums2.end());

        vector<int> a;
        for(int i : n1) if (n2.count(i) == 0) a.push_back(i);

        vector<int> b;
        for(int i : n2) if (n1.count(i) == 0) b.push_back(i);
        
        return {a, b};
    }
};
