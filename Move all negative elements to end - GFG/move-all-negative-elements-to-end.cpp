//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[], int n)
    {
        // counting negatives
        int neg = 0;
        for(int i = 0; i < n; i++) if(arr[i] < 0) neg++;
        
        
        int ans[n] = {0};
        int start = 0;
        int end = n-neg;
        
        for(int i = 0; i < n; i++) {
            if(arr[i] > 0) {
                ans[start] = arr[i];
                start++;
            }    
            else {
                ans[end] = arr[i];
                end++;
            }
        }
        
        
        // copying 
        for(int i = 0; i < n; i++) arr[i] = ans[i];
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends