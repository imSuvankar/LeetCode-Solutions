class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        vector<pair<int, int>> v;
        for(int i = 0; i < arr.size(); i++) v.push_back({abs(x - arr[i]), i});
        sort(v.begin(), v.end());
        
        vector<int> ans;
        for(auto i : vector<pair<int, int>> (v.begin(), v.begin()+k)) ans.push_back(arr[i.second]);

        sort(ans.begin(), ans.end());
        return ans;
    }
};