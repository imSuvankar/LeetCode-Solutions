class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        
        vector<int> mins;

        for(auto i : timePoints) {
            int hour = stoi(i.substr(0, i.find(':')));
            int min = stoi(i.substr(i.find(':')+1, 5));
            mins.push_back(hour*60 + min);
        }
        
        sort(mins.begin(), mins.end());

        int ans = INT_MAX;

        for(int i = 0; i < mins.size()-1; i++) {
            ans = min(ans, mins[i+1] - mins[i]);
            if(!ans) return 0;
        }
        
        int edgeCase = 1440 - mins.back() + mins.front();
        return (edgeCase < ans) ? edgeCase : ans;
    }
};
