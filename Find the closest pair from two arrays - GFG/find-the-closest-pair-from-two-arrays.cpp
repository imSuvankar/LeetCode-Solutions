//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function teamplate for C++

class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) 
    {
        int i = 0;
        int j = m-1;
        
        vector<int> ans = {arr[i], brr[j]};
        int curr = arr[i] + brr[j];
        int diff = abs(curr - x);
        
        while(i < n && 0 <= j) 
        {
            curr = arr[i] + brr[j];
            
            if(curr == x) return{arr[i], brr[j]};
            
            else if(curr < x) {
                int currDiff = abs(curr - x);
                if(currDiff < diff) {
                    diff = currDiff;
                    ans[0] = arr[i];
                    ans[1] = brr[j];
                }
                i++;
            }
            
            else {
                int currDiff = abs(curr - x);
                if(currDiff < diff) {
                    diff = currDiff;
                    ans[0] = arr[i];
                    ans[1] = brr[j];
                }
                j--;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	int m,n,x;
	while(t--)
    {
        cin>>n>>m;
        int a[n],b[m];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        for(int i=0;i<m;i++)
            cin>>b[i];
            
        cin>>x;
        
        vector<int> ans;
        Solution ob;
        ans = ob.printClosest(a, b, n, m, x);
        cout << abs(ans[0] + ans[1] - x) << endl;
        
    }
    return 0;
}

// } Driver Code Ends