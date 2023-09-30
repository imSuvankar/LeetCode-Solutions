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
            int type1 = mins[i] + 1440 - mins[i+1];
            int type2 = max(mins[i], mins[i+1]) - min(mins[i], mins[i+1]);

            ans = min(ans, min(type1, type2));
            if(!ans) return 0;
        }
        
        int edgeCase = 1440 - mins.back() + mins.front();
        return (edgeCase < ans) ? edgeCase : ans;
    }
};