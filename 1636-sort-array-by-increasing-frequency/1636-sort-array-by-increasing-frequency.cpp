bool comp(pair<int, int> a, pair<int, int> b) {
    return (a.second != b.second) ? a.second < b.second : a.first > b.first;
}

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> freqMap;
        for(int i : nums) freqMap[i]++;

        vector<pair<int, int>> pairVect;
        for(auto i : freqMap) pairVect.push_back(i);
        sort(pairVect.begin(), pairVect.end(), comp);

        vector<int> ans;
        for(auto i : pairVect) ans.insert(ans.end(), i.second, i.first);
        return ans;
    }
};