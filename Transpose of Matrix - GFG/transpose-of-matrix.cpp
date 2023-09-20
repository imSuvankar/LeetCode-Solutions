//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public:  
    void transpose(vector<vector<int> >& matrix, int n)
    { 
        vector<vector<int>> ans;
        
        for(int col  = 0; col < n; col++) {
            vector<int> temp;
            for(int row = 0; row < n; row++) temp.push_back(matrix[row][col]);
            ans.push_back(temp);
        }
        
        matrix = ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n,vector<int>(n)); 

        for(int i=0; i<n; i++)
        {
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        ob.transpose(matrix,n);
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
                cout<<matrix[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends