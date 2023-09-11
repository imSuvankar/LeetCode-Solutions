//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string calc_Sum(int *a, int n, int *b, int m){
    
        string ans;
        int carry = 0;
        
        int i = n-1;
        int j = m-1;
        
        while(i >= 0 && j >= 0) {
            int temp = a[i] + b[j] + carry;
            ans.insert(0, to_string(temp % 10));
            carry = temp / 10;
            i--, j--;
        }
        
        while(i >= 0) {
            int temp = a[i] + carry;
            ans.insert(0, to_string(temp % 10));
            carry = temp / 10;
            i--;
        }
        
        while(j >= 0) {
            int temp = b[j] + carry;
            ans.insert(0, to_string(temp % 10));
            carry = temp / 10;
            j--;
        }
        
        if(carry) ans.insert(0, to_string(carry));
        
        while(ans[0] == '0') ans.erase(0,1);
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int m;
	    cin>>m;
	    int b[m];
	    for(int i=0;i<m;i++){
	        cin>>b[i];
	    }
	    Solution ob;
	    cout << ob.calc_Sum(a,n,b,m) << endl;
	}
	return 0;
}
// } Driver Code Ends
