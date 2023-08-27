bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}


class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) 
    {
        map<int, int> myMap;
        for(int i : arr) myMap[i]++;

        vector<pair<int, int>> vec;
        for(auto i : myMap) vec.push_back(i);
    
        sort(vec.begin(), vec.end(), cmp);
        return vec[0].first;        
    }
};