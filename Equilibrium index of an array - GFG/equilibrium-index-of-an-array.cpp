//{ Driver Code Starts
#include <iostream>
using namespace std;
#include <stdio.h>
 
int findEquilibrium(int [], int );
 
int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<findEquilibrium (a,n)<<endl;
	}
	// your code goes here
	return 0;
}
// } Driver Code Ends


/* You are required to complete this method*/
int findEquilibrium(int A[], int n)
{
    /*
    // APPROACH 1: O(n^2)
    
    for(int i = 0; i < n; i++) {
        
        int left = 0;
        int right = 0;
        
        for(int j = 0; j < n; j++) {
            if(j < i) left += A[j];
            else if(j == i) continue;
            else right += A[j];
        }
        
        if(left == right) return i;
    }
    
    return -1;
    */
    
    
    
    // APPROACH 2: O(log(n))
    
    int leftSums[n] = {-1};
    leftSums[0] = A[0];
    
    int rightSums[n] = {-1};
    rightSums[n-1] = A[n-1];
    
    for(int i = 1; i < n; i++) leftSums[i] = leftSums[i-1] + A[i];
    for(int i = n-2; i >= 0; i--) rightSums[i] = A[i] + rightSums[i+1];
    
    for(int i = 0; i < n; i++) if(leftSums[i] == rightSums[i]) return i;
    return -1;
}