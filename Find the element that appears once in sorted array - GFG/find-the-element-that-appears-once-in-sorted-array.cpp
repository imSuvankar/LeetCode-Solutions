//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        //code here.
        
        int start = 0;
        int end = n-1;
        int mid = start + (end - start) / 2;
        
        while(start <= end) {
            
            // mid is odd index
            if(mid & 1) {
                if(mid+1 < n && arr[mid] == arr[mid+1]) end = mid - 1;
                else if(0 <= mid-1 && arr[mid-1] == arr[mid]) start = mid + 1;
            }
            
            // mid is even index
            else {
                if(mid+1 < n && arr[mid] == arr[mid+1]) start = mid + 2;
                else if(0 <= mid-1 && arr[mid-1] == arr[mid]) end = mid - 2;
                else break;
            }
            
            mid = start + (end - start) / 2;
        }
        
        return arr[mid];
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends