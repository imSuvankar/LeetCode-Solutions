//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int firstIndex(int a[], int n) 
    {
        int start = 0;
        int end  = n-1;
        int mid = start + (end - start) / 2;
        int ans = -1;
        
        while(start <= end) {
            if(a[mid]) {
                ans = mid;
                end = mid - 1;
            }
            else start = mid + 1;
            mid = start + (end - start) / 2;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.firstIndex(a, n) << endl;
    }
}
// } Driver Code Ends