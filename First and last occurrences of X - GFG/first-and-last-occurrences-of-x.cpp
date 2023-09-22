//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        
        // left most occ
        int start = 0;
        int end = n-1;
        int mid = start + (end - start) / 2;
        int leftIndex = -1;
        
        while(start <= end) {
            if(arr[mid] == x) {
                leftIndex = mid;
                end = mid - 1;
            }
            else if(arr[mid] < x) start = mid + 1;
            else end = mid - 1;
            mid = start + (end - start) / 2;
        }
        
        
        if(leftIndex == -1) return {-1};
        
        
        // right most occ
        start = 0;
        end = n-1;
        mid = start + (end - start) / 2;
        int rightIndex = -1;
        
        while(start <= end) {
            if(arr[mid] == x) {
                rightIndex = mid;
                start = mid + 1;
            }
            else if(arr[mid] < x) start = mid + 1;
            else end = mid - 1;
            mid = start + (end - start) / 2;
        }
        
        
        return {leftIndex, rightIndex};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends