//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        
        for(int i = 0; i < arr.size(); i++) {
            if(i == 0 || arr[i] != arr[i-1]) {
                
                for(int j = i+1; j < arr.size(); j++) {
                    if(j == i+1 || arr[j] != arr[j-1]) {
                        
                        int s = j+1;
                        int e = arr.size() - 1;
                        int currSum = k - (arr[i] + arr[j]);
                        
                        while(s < e) {
                            if(currSum == arr[s] + arr[e]) {
                                ans.push_back({arr[i], arr[j], arr[s], arr[e]});
                                while(s < e && arr[s] == arr[s+1]) s++;
                                while(s < e && arr[e-1] == arr[e]) e--;
                                s++, e--;
                            }
                            else if(currSum < arr[s] + arr[e]) e--;
                            else s++;
                        }
                    }
                }
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends