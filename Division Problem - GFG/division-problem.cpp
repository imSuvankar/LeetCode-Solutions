//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int findX(int A, int B){
        if(A == 1 || B == 1) return 1;
        for(int i = 0; i < B; i++) if((A*i-1) % B == 0) return i;
        return -1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int A, B;
        cin>>A>>B;
        
        Solution ob;
        cout<<ob.findX(A, B)<<"\n";
    }
    return 0;
}
// } Driver Code Ends