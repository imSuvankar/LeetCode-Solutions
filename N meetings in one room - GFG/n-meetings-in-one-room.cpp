//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

bool cmp (pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}


class Solution
{
    public:
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int, int>> meetings;
        for(int i = 0; i < n; i++) meetings.push_back({start[i], end[i]});
        sort(meetings.begin(), meetings.end(), cmp);
        
        int c = 1;
        int lastEnd = meetings[0].second;
        
        for(int i = 1; i < n; i++) {
            if(lastEnd < meetings[i].first) {
                c++;
                lastEnd = meetings[i].second;
            }
        }
        
        return c;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends